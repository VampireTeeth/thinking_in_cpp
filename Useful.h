/*
 * =====================================================================================
 *
 *       Filename:  Useful.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27/01/2013 16:25:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef USEFUL_H_
#define USEFUL_H_

#include <iostream>
using namespace std;

class X{
  int i;
public:
  static const int factor = 11;

  X(int v = 0):i(v){
    cout << "X::X(int)" << endl;
  }

  ~X(){
    cout << "X::~X()" << endl;
  }

  void set(int v) { 
    i = v; 
  }

  int read() const { 
    return i; 
  }

  int permute() { 
    return i = i*factor; 
  }
};

const int X::factor;
#endif
