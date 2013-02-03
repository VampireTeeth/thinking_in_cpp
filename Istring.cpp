/*
 * =====================================================================================
 *
 *       Filename:  Istring.cpp
 *
 *    Description:  Demostration of istrstream
 *
 *        Version:  1.0
 *        Created:  03/02/2013 16:39:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <strstream>
using namespace std;

int main() {
  istrstream s("14 4.14 This is a test");
  int i;
  float f;
  s >> i >> f;
  char buf[100];
  s >> buf;
  cout << "i = " << i << ", f = " << f << endl;
  cout << "buf = " << buf << endl;
  cout << s.rdbuf() << endl;
  return 0;
}
