/*
 * =====================================================================================
 *
 *       Filename:  Stype.cpp
 *
 *    Description:  Demostration of stream buffering
 *
 *        Version:  1.0
 *        Created:  01/02/2013 22:55:11
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

int main(int argc, const char* argv[]) {
  if(argc != 2) {
    cerr << "Wrong number of arguments" << endl;
    exit(1);
  }

  const char* filename = argv[1];
  ifstream in(filename);
  if(!in.is_open()){
    cerr << "Cannot open file " << filename << endl;
    exit(1);
  }
  cout << in.rdbuf();
}
