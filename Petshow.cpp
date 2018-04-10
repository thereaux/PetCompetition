/*
 * Author: Dan Taro
 * File: Petshow.cpp
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */
#include "Petshow.h"

Petshow::Petshow()
{
  //do nothing because pets will already be initialized
}

Petshow::Petshow(Dog d, Sealion s)
{
this->d = d;
this->s = s;
}

int Petshow::get_dog_age() const
{
  return d.get_age();
}

int Petshow::get_sealion_age() const
{
  return s.get_age();
}

int Petshow::numWinners() const
{
  return 2;
}
