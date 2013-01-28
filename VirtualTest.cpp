/*
 * =====================================================================================
 *
 *       Filename:  VirtualTest.cpp
 *
 *    Description:  Demostration of virtual member functions
 *
 *        Version:  1.0
 *        Created:  28/01/2013 16:37:35
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

class A{
public:
  virtual void say() const {
    cout << "A::say()" << endl;
  }
};

class B : public A{
public:
  void say() const {
    cout << "B::say()" << endl;
  }
};

class C : public B{
public:
  void say() const {
    cout << "C::say()" << endl;
  }
};

void say(A& a) {
  a.say();
}

void say1(B& b) {
  b.say();
}

int main(){
  A a;
  B b;
  C c;
  say(a);
  say(b);
  say(c);
  say1(b);
  say1(c);
  return 0;
}
