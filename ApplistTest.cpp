/*
 * =====================================================================================
 *
 *       Filename:  ApplistTest.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  30/01/2013 23:13:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "Applist.h"
using namespace std;

class Dog{
  int i;
public:
  Dog(int i = 1): i(i){
    cout << "Dog::Dog(int)" << endl;
  }
  void speak() const{
    cout << "Dog{i="<<i<<"} speak!" << endl;
  }
  void eat(int n) const{
    cout << "Dog{i="<<i<<"} eat "<<n<<"!" << endl;
  }
};

int main() {
  TStack<Dog> dogStack;
  for(int i = 0; i < 10; i++){
    dogStack.push(new Dog(i));
  }
  applist(dogStack, &Dog::speak);
  applist(dogStack, &Dog::eat, 1);
  applist(dogStack, &Dog::eat, 2);
}
