/*
 * Author: Dan Taro
 * File: Sealion.cpp
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

#include "Sealion.h"

Sealion::Sealion()
{
  name = "Sealy";
  age = 1;
}

Sealion::Sealion(string petName, int petAge)
{
  name  = petName;
  age = petAge;
}

void Sealion::rename(string newName)
{
  name = newName;
}

void Sealion::newAge(int newAge)
{
  age = newAge;
}

string Sealion::get_name() const
{
  return name;
}

int Sealion::get_age() const
{
  return age;
}
