/*
 * =====================================================================================
 *
 *       Filename:  PtrRef.cpp
 *
 *    Description:  Demostration of pointer reference
 *
 *        Version:  1.0
 *        Created:  25/01/2013 20:12:31
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

void increment(int*& ptr){
  ptr++;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int* i = 0;
  cout << i << endl;
  increment(i);
  cout << i << endl;
  increment(i);
  cout << i << endl;
}//r ----------  end of function main  ---------- */
