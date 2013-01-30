/*
 * =====================================================================================
 *
 *       Filename:  TStack.h
 *
 *    Description:  Demostration of template stack
 *
 *        Version:  1.0
 *        Created:  30/01/2013 20:35:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef TSTACK_H_
#define TSTACK_H_

enum Owns{no = 0, yes = 1};

template<class T> class TStackIter;

template<class T>
class TStack {

  struct link{
    T* data;
    link* next;
    link(T* d, link* n){
      data = d;
      next = n;
    }
  } * head;
  Owns owns;
public:
  TStack(Owns o = no);
  ~TStack();
  void push(T* d);
  T* peek() const;
  T* pop();
  Owns ownership() const;
  void ownership(Owns o);
  friend class TStackIter<T>;
};

template<class T>
class TStackIter {
  struct TStack<T>::link* p; 
public:
  TStackIter(const TStack<T>& S):p(S.head){}
  TStackIter(const TStackIter<T>& I):p(I.p){}
  virtual ~TStackIter(){}

  TStackIter<T>& operator++(){
    if(p) p = p->next;
    return *this;
  }

  TStackIter<T>& operator++(int){
    operator++();
  }

  T* operator->() const {
    return current();
  }

  operator bool() const {
    return p;
  }

  T* current() const {
    if(!p) return 0;
    return p->data;
  }
};

template<class T>
TStack<T>::TStack(Owns o):owns(o), head(0){
}

template<class T>
TStack<T>::~TStack(){
  if(!head) return;
  link* p;
  for(p=head; p->next; p = p->next) {
    if(owns==yes){
      delete p->data;
    }
    delete p;
  }
}

template<class T>
inline void TStack<T>::push(T* d) {
  head = new link(d, head);
}

template<class T>
inline T* TStack<T>::peek() const {
  if(!head) return 0;
  return head->data;
}

template<class T>
inline T* TStack<T>::pop(){
  if(!head) return 0;
  link* oldhead = head;
  head = head->next;
  T* res = oldhead->data;
  delete oldhead;
  return res;
}

template<class T>
inline Owns TStack<T>::ownership() const {
  return owns;
}

template<class T>
inline void TStack<T>::ownership(Owns o){
  owns = o;
}
#endif
