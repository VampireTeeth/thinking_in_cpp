/*
 * =====================================================================================
 *
 *       Filename:  HowMany.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/01/2013 20:32:21
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


class HowMany{
  static int object_count;
public:
  HowMany();
  ~HowMany();
  static void print(const char* msg = 0);
};

int HowMany::object_count = 0;

void HowMany::print(const char* msg){
  if(msg) cout << msg << endl;
  cout << "object_count = " << object_count << endl;
}

HowMany::HowMany(){
  object_count++;
  cout << "HowMany::HowMany()" << endl;
}

HowMany::~HowMany(){
  object_count--;
  cout << "HowMany::~HowMany()"<<endl;
}


HowMany f(HowMany h){
  h.print("h argument inside f()");
  return h;
}

int main() {
  HowMany h;
  h.print("h in main():");
  HowMany h2 = f(h);
  h2.print("h2 in main():");
}

