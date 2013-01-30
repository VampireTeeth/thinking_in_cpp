/*
 * =====================================================================================
 *
 *       Filename:  TStackTest.cpp
 *
 *    Description:  Test of TStack
 *
 *        Version:  1.0
 *        Created:  30/01/2013 21:06:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "TStack.h"
using namespace std;

class X{
  int i;
public:
  X(int i = 0):i(i){
    cout << "X::X()" << endl;
  }
  ~X(){
    cout << "X::~X()" << endl;
  }

  friend ostream& operator<<(ostream& o, const X& x) {
    o << x.i;
    return o;
  }

  friend ostream& operator<<(ostream& o, const X* xp) {
    o << xp->i;
    return o;
  }
};

int main(){
  int i;
  TStack<X> S(yes);
  for(i = 0; i < 20; i++){
    S.push(new X(i));
  }
  for(i = 0; i < 10; i++){
    cout << S.pop() << endl;
  }

}

