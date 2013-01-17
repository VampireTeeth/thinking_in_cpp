/*
 * =====================================================================================
 *
 *       Filename:  Definit.cpp
 *
 *    Description:  Elimination of definition block
 *
 *        Version:  1.0
 *        Created:  17/01/2013 20:03:46
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Steven Liu
 *   Organization:  steventk
 *
 * =====================================================================================
 */

#include "Definit.h"
using namespace std;

G::G(int I){
    i = I;
}

int G::get(){
	return i;
}
