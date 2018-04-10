/*
 * Author: Dan Taro
 * File: Sealion.h
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

 #ifndef _SEALION_H
 #define _SEALION_H
#include <string>
 using namespace std;

 class Sealion
 {
 public:
      Sealion();
      Sealion(string name, int age);
      void rename(string newName);
      void newAge(int newAge);
      string get_name() const;
      int get_age() const;
  private:
    string name;
    int age;
  };

 #endif
