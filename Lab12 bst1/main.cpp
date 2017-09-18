#include <iostream>
#include"BST.h"
using namespace std;

int main()
{
    BST<int> b1;
    if(b1.isEmpty())
        cout << "Tree is empty" << endl;
    b1.insert(4);
    b1.insert(9);
    b1.insert(2);
    b1.insert(7);
    b1.insert(3);
    b1.insert(11);
    b1.insert(17);
    b1.insert(0);
    b1.insert(5);
    b1.insert(1);
    if(b1.isEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;
    b1.printInOrder();
    cout << endl;
    if(b1.find(9))
        cout << "Element is found" << endl;
    else
        cout << "Element is not found" << endl;
    if(b1.find(13))
        cout << "Element is found" << endl;
    else
        cout << "Element is not found" << endl;
    b1.printPreOrder();
    cout << endl;
    b1.printPostOrder();
    cout << endl;
    cout << "Number of leaves: " <<  b1.numLeaves() << endl;
    cout << "Minnimum: " <<  b1.findMin() << endl;
    return 0;
}
