/*
 * =====================================================================================
 *
 *       Filename:  TestAutoComplete.cpp
 *
 *    Description:  Test AutoComplete
 *
 *        Version:  1.0
 *        Created:  25/01/2013 19:02:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Person{
  const char* Name;
  int Age;
public:
  Person(const char* Name="", int Age=0);
  const char* name() const;
  int age() const;
};

///Definitions for class Person
Person::Person(const char* Name, int Age):Name(Name), Age(Age){}

inline const char* Person::name() const{
  return Name;
}

inline int Person::age() const {
  return Age;
}
///End of definition for class Person
int main(){
  Person* p = new Person("Steven", 28);
  cout << p->age() << ", " << p->name() << endl;
}

