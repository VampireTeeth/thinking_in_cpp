/*
 * =====================================================================================
 *
 *       Filename:  Format.cpp
 *
 *    Description:  Demostration of iostream format
 *
 *        Version:  1.0
 *        Created:  03/02/2013 17:18:47
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

void print(int&, float&, const char*);

int main(int argc, char** argv) {
  int i = 47;
  float f = 2314.414;
  const char* s = "Is there any more?";
    
  print(i, f, s);
  cout.setf(ios::unitbuf);
  print(i, f, s);
  cout.setf(ios::uppercase);
  print(i, f, s);
  cout.setf(ios::showpos);
  print(i, f, s);
  cout.setf(ios::hex, ios::basefield);
  print(i, f, s);
  cout.setf(ios::showpoint);
  print(i, f, s);
  cout.setf(ios::scientific, ios::floatfield);
  print(i, f, s);
  cout << "Precision = " << cout.precision() << endl;
  cout.setf(ios::fixed, ios::floatfield);
  print(i, f, s);

  cout.fill('X');
  cout.width(40);
  cout << i << endl;

  cout.width(40);
  cout << f << endl;


  cout.width(40);
  cout << s << endl;

  cout.setf(ios::left, ios::adjustfield);
  cout.width(40);
  cout << i << endl;

  cout.width(40);
  cout << f << endl;


  cout.width(40);
  cout << s << endl;

  return 0;
}

void print(int& i, float& f, const char* s) {
  cout << i << endl;
  cout << f << endl;
  cout << s << endl;
}
