/*
 * =====================================================================================
 *
 *       Filename:  CompositionDemo.cpp
 *
 *    Description:  Demostration of composition
 *
 *        Version:  1.0
 *        Created:  27/01/2013 15:59:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "Useful.h"
using namespace std;

class Y{
  int j;
public:
  X x;
  Y(int v = 0);
  ~Y();
  int val() const;
};

Y::Y(int v):j(v), x(v){
  cout << "Y::Y()" << endl;
}

Y::~Y(){
  cout << "Y::~Y()" << endl;
}

inline int Y::val() const {
  return j;
}

int main(){
  const int* cip = &X::factor;
  cout << "Address of factor of X: " << cip << endl;
  cout << "Factor of X: " << X::factor << endl;
  Y* y = new Y(12);
  cout << "Value of y: " << y->val() << endl;
  cout << "Value of x: " << y->x.read() << endl;
  cout << "Permute of x: " << y->x.permute() << endl;
  delete y;
  y = new Y();
  cout << "Value of y: " << y->val() << endl;
  cout << "Value of x: " << y->x.read() << endl;
  delete y;
}
