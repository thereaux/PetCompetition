/*
 * Author: Dan Taro
 * File: Dog.cpp
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

#include "Dog.h"
#include <string>

Dog::Dog()
{
  name = "Dog-o";
  age = 1;
}

Dog::Dog(string petName, int petAge)
{
  name  = petName;
  age = petAge;
}

void Dog::rename(string newName)
{
  name = newName;
}

void Dog::newAge(int newAge)
{
  age = newAge;
}

string Dog::get_name() const
{
  return name;
}

int Dog::get_age() const
{
  return age;
}
