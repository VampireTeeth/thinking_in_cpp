#include <cstdio>
using namespace std;


class Tree
{
    int height;
public:
    Tree(int h);
    ~Tree();
    void grow(int years);
    void printsize();
};

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

int main(){
    Tree t(4);
    t.printsize();
    t.grow(5);
    t.printsize();
}


