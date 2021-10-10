#ifndef H_BST
#define H_BST

#include <iostream>
using namespace std;

class AVL
{
    protected:
        struct node 
        {
            int data;
            node* left;
            node* right;
        };
        node* insert(int data, node* root);
        bool find(node* root, int data);
        void printInOrder(node* root);
        void printPreOrder(node* root);
        void printPostOrder(node* root);

    public:
        node* root;
        AVL();
        void insert(int data);
        void printInOrder();
        void printPreOrder();
        void printPostOrder();
};

#endif