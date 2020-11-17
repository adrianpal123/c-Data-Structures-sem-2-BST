#include <iostream>
using namespace std;

class BST
{
private:
    struct Node
    {
        int data;
        Node* left=NULL;
        Node* right=NULL;
    };
    Node* root=NULL;

    Node* create_node(int);
    void print_private_in_order(Node*);
    void add_node_private(int, Node*);
    void cautarePrivate(int,Node*);
    void print_private_preorder(Node*);
    void print_private_postorder(Node* );


public:

     BST();
    ~BST();

    void add_node(int);
    void print_in_order();
    void print_preorder();
    void cautare(int);
    void print_postorder();

};
