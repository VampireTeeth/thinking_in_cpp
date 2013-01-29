/*
 * =====================================================================================
 *
 *       Filename:  Stackt.h
 *
 *    Description:  Demostration of template for stack
 *
 *        Version:  1.0
 *        Created:  29/01/2013 20:25:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef STACKT_H_
#define STACKT_H_
template<class T> class StackIter;

template<class T>
class Stack{
  static const int size = 100;
  T s[size];
  int top;
public:
  Stack();
  virtual ~Stack();
  void push(const T& e);
  T& pop();

  friend class StackIter<T>;
};

template<class T>
class StackIter{
  Stack<T>& S;
  int index;
public:
  StackIter(Stack<T>& S);
  virtual ~StackIter();
  T& operator++();
  T& operator++(int);
};

const int Stack::size;

template<class T> 
Stack<T>::Stack():top(0){
}

template<class T>
Stack<T>::~Stack<T>(){

}

template<class T>
void Stack<T>::push(const T& e){
  if(top < size) {
    s[top++] = e;
  }
}

template<class T>
T& Stack<T>::pop(){
  return s[top > 0 ? --top : top];
}

template<class T>
StackIter<T>::StackIter(Stack<T>& S)
  :S(S), index(0){}

template<class T>
StackIter<T>::~StackIter(){}

template<class T>
T& StackIter<T>::operator++(){
  if(index < S.top - 1) index++;
  return S.s[index];
}

template<class T>
T& operator++(int) {
  int idx = index;
  if(index < S.top - 1) index++;
  return S.s[idx];
}
#endif
