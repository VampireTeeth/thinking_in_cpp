/*
 * =====================================================================================
 *
 *       Filename:  Autocc.cpp
 *
 *    Description:  Demostration of default copy-constructor
 *
 *        Version:  1.0
 *        Created:  25/01/2013 21:26:52
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

class WithCC{
public:
  WithCC(){}
  WithCC(const WithCC& c){
    cout << "WithCC::WithCC(const WithCC&)" << endl;
  }
};

class WoCC{
  enum {bsz = 30};
  char buf[bsz];
  public:
    WoCC(const char* msg=0){
      memset(buf, 0, bsz);
      if(msg){
        strncpy(buf, msg, bsz);
      }
    }

    void print(const char* msg=0) const{
      if(msg) cout << msg << ":";
      cout << buf << endl;
    }
};

class Composite{
  WithCC wcc;
  WoCC wocc;
public:
  Composite():wocc("Composite()"){}
  void print(const char* msg=0) const {
    wocc.print(msg);
  }
};

int main(){
  Composite c;
  c.print("Contents of c");
  cout << "Calling Composite copy-constructor" << endl;
  Composite c2 = c;
  c2.print("Contents of c2");
}
