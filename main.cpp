#include "BST.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    AVL tree;
    int num;
    string line;
    ifstream AVL_tests("AVL_tests.txt");
    if (AVL_tests.is_open())
    {
        while(getline (AVL_tests,line))
        {
            num = std::stoi(line);
            tree.insert(num);
        }
        AVL_tests.close();
    }

    tree.printInOrder();
    cout << endl;
    tree.printPreOrder();
    cout << endl;
    tree.printPostOrder();
    return 0;
}

