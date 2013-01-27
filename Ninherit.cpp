/*
 * =====================================================================================
 *
 *       Filename:  Ninherit.cpp
 *
 *    Description:  Demostration of functions that are not automatically inherited
 *
 *        Version:  1.0
 *        Created:  27/01/2013 21:27:03
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

class Root{
public:
  Root(){
    cout << "Root::Root()" << endl;
  }

  Root(const Root& r){
    cout << "Root::Root(const Root&)" << endl;
  }

  Root(int i) {
    cout << "Root::Root(int)" << endl;
  }

  Root& operator=(const Root& r){
    cout << "Root::operator=(const Root&)" << endl;
    return *this;
  }

  class Other{};
  operator Other() const{
    cout << "Root::operator Other" << endl;
    return Other();
  }

  ~Root(){
    cout << "Root::~Root()" << endl;
  }
};

class Derived:public Root{};

void f(Root::Other) {
  cout << "f(Root::Other)" << endl;
}

int main(){
  Derived d1;
  Derived d2 = d1;
  //Derived d3(1);
  d1 = d2;
  f(d1);
}

