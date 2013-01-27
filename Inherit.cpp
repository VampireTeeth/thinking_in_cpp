/*
 * =====================================================================================
 *
 *       Filename:  Inherit.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27/01/2013 19:29:20
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

class Y : public X {
  int i;
public:
  Y(int v = 0):i(v), X(v){
    cout << "Y::Y(int)" << endl;
  }
  ~Y() {
    cout << "Y::~Y()" << endl;
  }

  int change() {
    i = permute();
    return i;
  }

  void set(int v) {
    i = v;
    X::set(v);
  }

  int get() const {
    return i;
  }
};

int main() {
  Y* y = new Y(12);
  cout << "Value of i in Y: " << y->get() << endl; 
  cout << "Value of i in X: " << y->read() << endl;
  y->change();
  cout << "After call of y->change()" << endl;
  cout << "Value of i in Y: " << y->get() << endl; 
  cout << "Value of i in X: " << y->read() << endl;

  delete y;
}
