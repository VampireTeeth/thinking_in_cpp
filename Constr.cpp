#include <cstdio>
#include "Constr.h"
using namespace std;



Tree::Tree(int h)
{
    height = h;
}

Tree::~Tree()
{
    puts("Inside Tree destructor");
    printsize();
}

void Tree::grow(int years){
    height += years;
}

void Tree::printsize(){
    printf("Tree size: %d\n", height);
}
