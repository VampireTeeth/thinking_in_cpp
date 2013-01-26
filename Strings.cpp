/*
 * =====================================================================================
 *
 *       Filename:  Strings.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/01/2013 13:15:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Strings.h" 
#include <cstring>
using namespace std;

namespace str{

String::String(const char* S) {
  s = new char[strlen(S)+1];
  strcpy(s, S);
}

String::~String(){
  delete [] s;
}


inline String* String::make(const char* S){
  return new String(S);
}

inline String::operator char*() const {
  return s;
}

inline char* String::str() const {
  return s;
}

inline String* makeString(const char* S){
  return new String(S);
}


inline ostream& operator<<(ostream& os, const String* S){
  return os << S->s;
}

}

int main(){
  using namespace str;
  String* str = String::make("Steven");
  cout << str << endl;
  delete str;
  str = makeString("Andrew");
  cout << str << endl;
  cout <<  (char*)(*str)<< endl;
  cout << "------------end-----------" << endl;
  delete str;
}


