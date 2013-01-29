/*
 * =====================================================================================
 *
 *       Filename:  TStash.h
 *
 *    Description:  Demostration of stash as template
 *
 *        Version:  1.0
 *        Created:  29/01/2013 21:27:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef TSTASH_H_
#define TSTASH_H_

#include <cstdlib>
using namespace std;

enum Owns{ no = 0, yes = 1, Default };

//template<class T, int sz> class TStashIter;

template<class T, int chunksize = 20>
class TStash{
  int quantity;
  int index;
  Owns own;
  T** storage;
  void inflate(int increase = chunksize);
public:
  TStash(Owns own = yes);
  virtual ~TStash();
  int Own(Owns own);
  int add(T* e);
  int remove(int index, Owns o = Default);
  T* operator[](int index) const;
  int count() const;
  //friend class TStashIter<T, chunksize>;
};
/*  
template<class T, int sz = 20>
class TStashIter{
  TStash<T, sz>& stash;
  int index;
public:
  TStashIter(TStash<T, sz>& s);
  virtual ~TStashIter();
  T& operator++();
  T& operator++(int);
  T& operator--();
  T& operator--(int);
};
*/

template<class T, int sz>
void TStash<T, sz>::inflate(int increase) {
  storage = (T**)realloc(storage, (quantity+increase) * sizeof(T*));
  quantity += increase;
}

template<class T, int sz>
TStash<T, sz>::TStash(Owns own)
  :own(own), storage(0), quantity(0), index(0){

}

template<class T, int sz>
TStash<T, sz>::~TStash(){
  if(!storage) return;
  if(own == yes){
    for(int i = 0; i < count(); i++) {
      delete storage[i];
    }
  }
  free(storage);
}

template<class T, int sz>
inline int TStash<T, sz>::Own(Owns o) {
  own = o;
}

template<class T, int sz>
int TStash<T, sz>::add(T* e) {
  if(index >= quantity){
    inflate();
  }
  storage[index++] = e;
  return index - 1;
}

template<class T, int sz>
int TStash<T, sz>::remove(int i, Owns o){
  if(i >= index || i < 0){
    return 0;
  }
  if(o == yes){
    delete storage[i];
  }
  storage[i] = 0;
}

template<class T, int sz>
T* TStash<T, sz>::operator[](int i) const {
  if(i >= index || i < 0){
    return NULL;
  }
  return storage[i];
}

template<class T, int sz>
int TStash<T, sz>::count() const {
  return index;
}

#endif
