/*
 * =====================================================================================
 *
 *       Filename:  Ostring.cpp
 *
 *    Description:  Demostration of ostrstream
 *
 *        Version:  1.0
 *        Created:  03/02/2013 16:45:26
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
  static const int SZ = 100;
  cout << "Input an int, a float and a string: ";
  int i;
  float f;
  char buf[SZ];
  cin >> i >> f;
  cin >> ws;
  cin.getline(buf, sizeof(buf));

  char buf1[SZ];
  for(int i = 0; i < SZ; i++) {
    buf1[i] = buf[i];
  }

  char out[SZ];
  ostrstream os(out, SZ);
  os << "integer = " << i << ", float = " << f;
  os << ", string = " << buf << endl;
  cout << os.rdbuf();
  
  ostrstream os1(buf, SZ);
  os1 << "integer = " << i << ", float = " << f << endl;
  cout << os1.rdbuf();


  ostrstream os2(buf1, SZ, ios::app);
  os2 << "integer = " << i << ", float = " << f << endl;
  cout << os2.rdbuf();
  return 0;
}
