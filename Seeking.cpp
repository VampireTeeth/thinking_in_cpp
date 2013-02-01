/*
 * =====================================================================================
 *
 *       Filename:  Seeking.cpp
 *
 *    Description:  Demostration of seeking in streams
 *
 *        Version:  1.0
 *        Created:  01/02/2013 23:15:13
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

int main(int argc, char* argv[]) {
  if(argc != 2) {
    cerr << "Wrong number of arguments" << endl;
    exit(1);
  }
  
  char* filename = argv[1];

  ifstream in(filename);
  if(!in.is_open()){
    cerr << "Cannot open file " << filename << endl;
    exit(1);
  }

  in.seekg(0, ios::end);
  streampos size = in.tellg();
  cout << "Size of file '" << filename << "' = " << size << endl;
  in.seekg(-size/10, ios::end);
  streampos pos = in.tellg();
  in.seekg(0, ios::beg);
  cout << "---------------------------------------------------------" << endl;
  cout << in.rdbuf();
  in.seekg(pos);
  cout << "---------------------------------------------------------" << endl;
  cout << endl << endl << in.rdbuf();
}
