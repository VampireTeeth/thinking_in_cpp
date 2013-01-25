/*
 * =====================================================================================
 *
 *       Filename:  Pmem.cpp
 *
 *    Description:  Demostration of pointer-to-member
 *
 *        Version:  1.0
 *        Created:  25/01/2013 21:57:56
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

class X{
public:
  void f(int);
  void g(int);
};

void X::f(int i){cout << "f() i = " << i << endl;}
void X::g(int i){cout << "g() i = " << i << endl;}

int main(){
  X x;
  X* xp;
  void (X::*pmem)(int) = &X::f;
  (x.*pmem)(1);
  pmem = &X::g;
  (xp->*pmem)(2);
}

