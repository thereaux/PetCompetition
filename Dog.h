/*
 * Author: Dan Taro
 * File: Dog.h
 * Last Modified: April 9, 2018
 * Advanced Topics
 * ----------------------------------------------------------------
 */

 #ifndef _DOG_H
 #define _DOG_H
 #include <string>
using namespace std;

 class Dog
 {
 public:
      Dog();
      Dog(string name, int age);
      void rename(string newName);
      void newAge(int newAge);
      string get_name() const;
      int get_age() const;
  private:
    string name;
    int age;
 };

#endif
