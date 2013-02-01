/*
 * =====================================================================================
 *
 *       Filename:  Iofile.cpp
 *
 *    Description:  Demostration of input and output files
 *
 *        Version:  1.0
 *        Created:  01/02/2013 23:30:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in("Iofile.cpp");
  ofstream out("Iofile.out");
  out << in.rdbuf();
  in.close();
  out.close();

  ifstream in2("Iofile.out", ios::in | ios::out);
  ostream out2(in2.rdbuf());
  cout << in2.rdbuf();

  out2 << "What does this to do with?" << endl;
  out2.seekp(0, ios::beg);
  out2 << "What about this?";
  
  in2.seekg(0, ios::beg);
  cout << endl << endl;
  cout << in2.rdbuf() << endl;
}
