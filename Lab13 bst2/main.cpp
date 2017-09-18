#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
    BST<int> t;
    if(t.isEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;
    t.insert(5);
    t.insert(2);
    t.insert(12);
    t.insert(-4);
    t.insert(3);
    t.insert(9);
    t.insert(21);
    t.insert(19);
    t.insert(25);
    t.printInOrder();
    cout << endl;
    t.remove(-4);
    t.printInOrder();
    cout << endl;
    t.remove(12);
    t.printInOrder();
    cout << endl;
    cout<< "Size : " << t.size() << endl;
    cout<< "Max Depth : " << t.maximumDepth() << endl;
    if(t.isSumPresent(3))
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}
