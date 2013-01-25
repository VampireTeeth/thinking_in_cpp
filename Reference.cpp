/*
 * =====================================================================================
 *
 *       Filename:  Reference.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/01/2013 19:58:28
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

int* f(int* x){
  (*x)++;
  return x;
}

int& g(int& x){
  x++;
  return x;
}

int& h(){
  static int x = 0;
  return x;
}

int main(){
  int i = 1;
  int *ip = &i;
  cout << i << endl;
  ip = f(&i);
  cout << i << endl;
  i = g(i);
  cout << i << endl;
  i = h();
  cout << i << endl;
}
