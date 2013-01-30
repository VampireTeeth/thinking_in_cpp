/*
 * =====================================================================================
 *
 *       Filename:  Applist.h
 *
 *    Description:  Demostration of template functions
 *
 *        Version:  1.0
 *        Created:  30/01/2013 23:04:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "TStack.h"

template<class T, class R>
void applist(TStack<T>& stack, R(T::*f)()){
  TStackIter<T> it(stack);
  while(it){
    (it.current()->*f)();
    it++;
  }
}

template<class T, class R>
void applist(TStack<T>& stack, R(T::*f)()const){
  TStackIter<T> it(stack);
  while(it){
    (it.current()->*f)();
    it++;
  }
}

template<class T, class R, class A>
void applist(TStack<T>& stack, R(T::*f)(A), A a){
  TStackIter<T> it(stack);
  while(it){
    (it.current()->*f)(a);
    it++;
  }
}

template<class T, class R, class A>
void applist(TStack<T>& stack, R(T::*f)(A) const, A a){
  TStackIter<T> it(stack);
  while(it){
    (it.current()->*f)(a);
    it++;
  }
}


