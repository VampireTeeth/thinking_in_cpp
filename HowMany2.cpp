/*
 * =====================================================================================
 *
 *       Filename:  HowMany2.cpp
 *
 *    Description:  Demostration of copy-constructor
 *
 *        Version:  1.0
 *        Created:  25/01/2013 20:54:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstring>
using namespace std;

class HowMany{
  //static const int bufsize;
  enum{bufsize=30};
  static int object_count;
  char id[bufsize];
public:
  HowMany(const char* ID);
  HowMany(const HowMany& h);
  ~HowMany();
  static void print(const char* msg = 0);
};

//const int HowMany::bufsize = 30;
int HowMany::object_count = 0;

void HowMany::print(const char* msg){
  if(msg) cout << msg << ":";
  cout << "object_count = " << object_count << endl;
}

HowMany::HowMany(const char* ID){
  if(ID){
    strncpy(id, ID, bufsize);
  }else{
    *id = 0;
  }
  object_count++;
  cout << "HowMany::HowMany(const char*):" << id << endl;
}

HowMany::HowMany(const HowMany& h){
  strncpy(id, h.id, strlen(h.id));
  strncat(id, " copy", bufsize - strlen(id));
  object_count++;
  cout << "HowMany::HowMany(const HowMany&):" << id << endl;
}

HowMany::~HowMany(){
  object_count--;
  cout << "HowMany::~HowMany():" << id << endl;
}

HowMany f(HowMany h){
  cout << "h argument in f()" << endl;
  HowMany::print();
  return h;
}

int main(){
  HowMany h("h");
  cout << "After constructor of h" << endl;
  HowMany::print();
  HowMany h2 = f(h);
  cout << "After assignment of h2 from f(h)" << endl;
  HowMany::print();
}
