#include "BST.h"

BST::BST()
{
    this->root = NULL;
}
BST::~BST()
{

}

BST::Node* BST::create_node(int value)
{
    Node *a = new Node();
    a->data = value;
    a->left = NULL;
    a->right = NULL;

    return a;
}

void BST::add_node(int value)
{
    add_node_private(value, this->root);
}

void BST::add_node_private(int value, Node *ptr)
{
    if (this->root == NULL)
    {
        this->root = create_node(value);
    }
    else
    {
        if (ptr->data > value)
        {
            if (ptr->left != NULL)
            {
                add_node_private(value, ptr->left);
            }
            else
            {
                ptr->left = create_node(value);
            }
        }
        else if (ptr->data < value)
        {
            if (ptr->right != NULL)
            {
                add_node_private(value, ptr->right);
            }
            else
            {
                ptr->right = create_node(value);
            }
        }

        else
        {
            cout << "nodul exista deja!";
        }
    }
}

void BST::print_in_order()
{
    print_private_in_order(this->root);
}

void BST::print_private_in_order(Node *ptr)
{
    if (this->root == NULL)
    {
        cout << "Nu avem niciun nod in arbore";
    }
    else
    {
        if (ptr->left != NULL)
            print_private_in_order(ptr->left);
        cout << ptr->data << " ";
        if (ptr->right != NULL)
            print_private_in_order(ptr->right);
    }
}


void BST::cautare(int key)
    {

        cautarePrivate(key,root);

    }

void BST::cautarePrivate(int key, Node* ptr)
{
     if (root==NULL)
            cout<<"nu exista arbore binar";
        else
        {
            if (key<ptr->data)
            {
                if (ptr->left!=NULL)
                {
                    cautarePrivate(key,ptr->left);
                }

                else
                    cout<<"nu am gasit valoarea data";
            }
            else if (key>ptr->data)
            {
                if (ptr->right!=NULL)
                {
                    cautarePrivate(key,ptr->right);
                }
                else
                    cout<<"Nu am gasit valoarea data "<<key;
            }
            else if (key==ptr->data)
                cout<<"Am gasit valoarea data "<<key;
        }
}

void BST::print_preorder()
{
    print_private_preorder(this->root);
}

void BST::print_private_preorder(Node* ptr)
{
   if (this->root == NULL)
    {
        cout << "Nu avem niciun nod in arbore";
    }
    else
    {
        cout << ptr->data << " ";
        if (ptr->left != NULL)
            print_private_in_order(ptr->left);
        if (ptr->right != NULL)
            print_private_in_order(ptr->right);
    }
}

void BST::print_postorder()
{
    print_private_postorder(this->root);

}

void BST::print_private_postorder(Node* ptr)
{
     if (this->root == NULL)
    {
        cout << "Nu avem niciun nod in arbore";
    }
    else
    {
        if (ptr->left != NULL)
            print_private_in_order(ptr->left);
        if (ptr->right != NULL)
            print_private_in_order(ptr->right);
        cout << ptr->data << " ";

    }

}



