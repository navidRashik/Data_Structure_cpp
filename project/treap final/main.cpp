#include <iostream>
#include"bst.h"
using namespace std;

int main()
{
    BST<int> t1;

    t1.insert(5);
    t1.insert(1);
    t1.insert(3);
    t1.insert(2);
    t1.insert(4);
    t1.insert(7);
    t1.insert(6);
    t1.insert(8);
    t1.insert(0);
    t1.printInOrder();
    cout<<endl;

    t1.Remove(0);
    t1.Remove(5);
    t1.Remove(7);
    t1.Remove(3);
    t1.printInOrder();


}
