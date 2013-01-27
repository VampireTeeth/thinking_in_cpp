/*
 * =====================================================================================
 *
 *       Filename:  Combined.cpp
 *
 *    Description:  Demostration of combination of composition and inheritance
 *
 *        Version:  1.0
 *        Created:  27/01/2013 19:53:24
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
  int i;
public:
  A(int i = 0):i(i){
    cout << "A::A()" << endl;
  }
  ~A(){
    cout << "A::~A()" << endl;
  }

  void f() const {
    cout << "A::f()" << endl;
  }
};

class B{
  int i;
public:

  B(int i = 0):i(i){
    cout << "B::B()" << endl;
  }
  ~B(){
    cout << "B::~B()" << endl;
  }

  void f() const{
    cout << "B::f()" << endl;
  }

};

class C : public B{ 
  A a;
public:
  C(int i = 0) : a(i), B(i){
    cout << "C::C()" << endl;
  }

  ~C(){
    cout << "C::~C()" << endl;
  }

  void f() const {
    cout << "C::f()" << endl;
    a.f();
    B::f();
  }
};


int main() {
  C c;
  c.f();
}
