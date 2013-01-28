/*
 * =====================================================================================
 *
 *       Filename:  VirtualFunctionCallInConstructor.cpp
 *
 *    Description:  Demostration of virtual function call in constructor
 *
 *        Version:  1.0
 *        Created:  28/01/2013 17:18:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Base {
public:
  Base(){
    say();
  }
  virtual void say() const {
    cout << "Base::say()" << endl;
  }
};

class Derived : public Base {
public:
  Derived(){
    say();
  }
  void say() const {
    cout << "Derived::say()" << endl;
  }
};

int main(){
  Derived* d = new Derived();
  delete d;
}
