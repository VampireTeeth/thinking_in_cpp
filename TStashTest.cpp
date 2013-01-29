/*
 * =====================================================================================
 *
 *       Filename:  TStashTest.cpp
 *
 *    Description:  Test of TStash
 *
 *        Version:  1.0
 *        Created:  29/01/2013 22:17:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "TStash.h"
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
  int val() const {
    return i;
  }
  friend ostream& operator<<(ostream& o, const X& x) {
    o << "X{ i = " << x.i<< " }";
    return o;
  }
};


int main(){
  TStash<X> ts(no);
  int i;
  for(i = 0; i < 30; i++) {
    ts.add(new X(i));
  }
  cout << ts.count() << endl;;
  for(i = 0; i < 30; i++) {
    cout << *ts[i] << endl;
  }

  ts.remove(2);
  for(i = 0; i < 30; i++) {
    cout << *ts[i] << endl;
  }


}

