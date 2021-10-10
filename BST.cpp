#include "BST.h"
#include<iostream>
using namespace std;

    AVL::AVL() {
        root = NULL;
        int depth;
    }

    AVL::node* AVL::insert(int data, node* root)
    {
        if(root == NULL)
        {
            root = new node;
            root->data = data;
            root->left =  NULL;
            root->right = NULL;
        }
        else if(data < root->data)
            root->left = insert(data, root->left);
        else if(data > root->data)
            root->right = insert(data, root->right);
        return root;
    }
    int depth(AVL *n)
    {
        if (n == NULL)
            return 0;
        return n->depth;
    }

void AVL::insert(int data) {
        root = insert(data, root);
    }

    bool AVL::find(node* root, int data)
    {  
        if(root == NULL)
            return false;
        else if(data < root->data)
            return find(root->left, data);
        else if(data > root->data)
            return find(root->right, data);
        else
            return true;
    }

void AVL::printInOrder(node *root)
{
     if(root == NULL)
            return;
        printInOrder(root->left);
        cout << root->data << " ";
        printInOrder(root->right);
}

    void AVL::printInOrder()
    {
        printInOrder(root);
    }

    void AVL::printPreOrder(node* root)
    {
        if(root==NULL)
            return;
        cout << root->data << " ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }

    void AVL::printPreOrder()
    {
        printPreOrder(root);
    }

    void AVL::printPostOrder(node* root)
    {
        if(root==NULL)
            return;
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout << root->data << " "; 
    }

    void AVL::printPostOrder()
    {
        printPostOrder(root);
    }