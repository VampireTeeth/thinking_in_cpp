/*
 * =====================================================================================
 *
 *       Filename:  iosexamp.cpp
 *
 *    Description:  Examples of iostream
 *
 *        Version:  1.0
 *        Created:  01/02/2013 20:21:55
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


int main() {
  int i;
  cout << "Input a integer:" << flush;
  cin >> i;

  float f;
  cout << "Input a float:" << flush;
  cin >> f;

  char c;
  cout << "Input a char:" << flush;
  cin >> c;

  char buf[100];
  cout << "Input a char buffer:" << flush;
  cin >> buf;

  cout << endl;
  cout << "i = " << i << endl;
  cout << "f = " << f << endl;
  cout << "c = " << c << endl;
  cout << "buf = " << buf << endl;

  cout << flush;
  cout << hex << "0x" << i << endl;
}

