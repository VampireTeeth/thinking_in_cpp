/*
 * =====================================================================================
 *
 *       Filename:  Strings.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/01/2013 12:26:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef STRINGS_H_
#define STRINGS_H_

#include <iostream>
using namespace std;

namespace str{

class String{
public:
  ~String();
  friend String* makeString(const char*);
  friend ostream& operator<<(ostream&, const String*);
  static String* make(const char*);
  operator char*() const;
  char* str() const;
private:
  char* s;
  String(const char*);
  String(const String&);
  void operator=(String&);
};

}
#endif
