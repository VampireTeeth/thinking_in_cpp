
/*
 * Constr.h
 *
 *  Created on: Jan 17, 2013
 *      Author: weikeliu
 */

#ifndef CONSTR_H_
#define CONSTR_H_



class Tree
{
    int height;
public:
    Tree(int h);
    ~Tree();
    void grow(int years);
    void printsize();
};


#endif /* CONSTR_H_ */
