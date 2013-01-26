/*
 * =====================================================================================
 *
 *       Filename:  PStash.cpp
 *
 *    Description:  Demostration of pointer stash
 *
 *        Version:  1.0
 *        Created:  26/01/2013 13:59:18
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
#include "PStash.h"

using namespace std;

PStash::PStash():storage(0), quantity(0), next(0){
  cout << "PStash::PStash()" << endl;
}

PStash::~PStash(){
  cout << "PStash::~PStash()" << endl;
  delete[] storage;
}

void PStash::inflate(int increase){
  const int sz = sizeof(void*);
  void** st = new void*[quantity+increase];
  memset(st, 0, (quantity+increase) * sz);
  memcpy(st, storage, quantity * sz);
  if(storage){
    delete [] storage;
  }
  storage = st;
  quantity += increase;
}

int PStash::add(void* element) {
  const int inflateSize = 10;
  if(next >= quantity) inflate(inflateSize);
  storage[next++] = element;
  return next - 1;
}

int PStash::count() const {
  return next;
}

void* PStash::operator[](int index) const {
  if(index >= next || index < 0) {
    return 0;
  }
  return storage[index];
}

int main() {
  PStash* ps = new PStash();
  int loop = 20;
  int i = 0;
  int* ip = NULL;
  for(; i < loop; ps->add(new int(i++)));
  cout << "[ ";
  for(i = 0; i < ps->count(); i++) {
    ip = (int*)((*ps)[i]);
    cout << ip << "=" << *ip;
    if(i < loop - 1) cout << ", ";
  }
  cout << " ]" << endl;
  delete ps;
}
