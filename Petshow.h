/*
 * Author: Dan Taro
 * File: Petshow.h
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

 #ifndef _PETSHOW_H
 #define _PETSHOW_H

 #include "Dog.h"
 #include "Sealion.h"

 class Petshow
 {
 public:
   Petshow();
   Petshow(Dog d, Sealion s);
   int get_dog_age() const;
   int get_sealion_age() const;
   int numWinners() const;
 private:
   Dog d;
   Sealion s;
 };

 #endif
