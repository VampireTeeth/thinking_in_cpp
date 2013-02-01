/*
 * =====================================================================================
 *
 *       Filename:  strfile.cpp
 *
 *    Description:  Example of file iostream
 *
 *        Version:  1.0
 *        Created:  01/02/2013 21:10:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <fstream>
#include <iostream>
using namespace std;

#define SZ 100

int main() {
  char buf[SZ];
  {
    ifstream in("strfile.cpp");
    ofstream out;
    out.open("./strfile1.out");
    int i = 1;
    while(!(in.eof())) {
      in.get(buf, SZ);
      if(!(in.eof()) && in.fail() && buf[0]=='\0') {
        in.clear();
      }
      in.get();
      cout << buf << endl;
      out << i++ << ":" << buf << endl;
    }
    out.close();
  }

  {
    ifstream in("strfile.cpp");
    ofstream out;
    out.open("./strfile2.out");
    int i = 1;
    while(in.getline(buf, SZ)) {
      cout << buf << endl;
      out << i++ << ":" << buf << endl;
    }
    out.close();
  }
}


