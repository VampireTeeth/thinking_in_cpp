/*
 * =====================================================================================
 *
 *       Filename:  Stackt.cpp
 *
 *    Description:  Demostration on the use of Stackt.h
 *
 *        Version:  1.0
 *        Created:  29/01/2013 20:43:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include "Stackt.h"
using namespace std;

int main() {
  Stack<int> s;
  int i;
  for(i = 0; i < 20; i++){
    s.push(i);
  }
  StackIter<int> si(s);
  for(i=0; i < 20; i++) {
    cout << si++ << endl;
  }
  for(i = 0;i < 20; i++) {
    cout << s.pop();
    if(i + 1 != 20) {
      cout << ", ";
    }
  }
  cout << endl;
}
