/*
 * Author: Dan Taro
 * File: main.cpp
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

 #include <iostream>
 #include "Petshow.h"
 #include "Dog.h"
 #include "Sealion.h"
// #include <string>
 using namespace std;

 int main(){

Dog *d;
Sealion *s;
Petshow *p;

d = new Dog("Dingo", 80);
s = new Sealion("Larry", 2);
p = new Petshow(*d, *s);

//Dog info
cout << "Enter the Dog and Sealion show! Get ready for fun.";
cout << "\n Here's the only Dog constestant: ";
cout << d->get_name();
cout << ", they are ";
cout << d->get_age();
cout << " dog years old!" << endl;

//Sealion info

cout << "\n Here's the only furry Sealion constestant: ";
cout << s->get_name();
cout << ", they are ";
cout << s->get_age();
cout << " years old!" << endl;

   return 0;
 }
