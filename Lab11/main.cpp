#include <iostream>
#include "SortedType.h"
using namespace std;

int main()
{
    SortedType<int> s;
    cout << s.GetLength() << endl;
    s.PutItem(5);
    s.PutItem(7);
    s.PutItem(6);
    s.PutItem(9);
    s.PrintList();
    s.PutItem(1);

    if(s.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is full" << endl;
 /*   s.DeleteItem(5);
    if(s.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is full" << endl;
    s.DeleteItem(1);
    s.PrintList();
    s.DeleteItem(6);
    s.PrintList();
    s.DeleteItem(9);*/
    s.PrintList();
    s.PutItem(5);
    s.PutItem(5);
    s.PrintList();
    s.MakeEmpty();


    s.PrintList();
    s.PutItem(5);
    s.PutItem(7);
    s.PutItem(6);
    s.PutItem(9);
    s.PrintList();
    return 0;
}
