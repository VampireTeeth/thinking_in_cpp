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

#include <cstdio>
#include <cstdlib>
using namespace std;

class G{
    int i;
public:
    G(int I);
}

G::G(int I){
    i = I;
}

