#include <iostream>
#include "BST.h"

void addNodes(BST *x)
{
    x->add_node(5);
    x->add_node(3);
    x->add_node(8);
    x->add_node(7);
    x->add_node(9);
}

int main()
{
    BST *a=new BST();
    addNodes(a);


    a->print_in_order();
    std::cout<<endl;
    a->print_preorder();
    std::cout<<endl;
    a->print_postorder();
    std::cout<<endl;



    a->cautare(3);
    std::cout<<endl;
    a->cautare(11);


}
