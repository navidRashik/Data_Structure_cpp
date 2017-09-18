#include <iostream>
#include "SortedType.h"

using namespace std;

int main()
{
    SortedType<int> u;
    cout<<"length: " <<u.GetLength()<<endl;
    u.PutItem(5);
    u.PutItem(7);
    u.PutItem(6);
    u.PutItem(9);
    u.PrintList();

    u.PutItem(1);
    u.PrintList();

    bool t[4];
    cout<<" search for item"<<endl;
    int a[4];

    //u.DeleteItem(7);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        u.GetItem(a[i],t[i]);
        if(t[i])
            cout<<a[i]<<" is found"<<endl;
        else
            cout<<a[i]<<" is not found"<<endl;

    }

    if(u.IsFull())
        cout<<"list is full"<<endl;
    else
        cout<<"list is not full"<<endl;


    u.DeleteItem(5);
    if(u.IsFull()==true)
        cout<<"list is full"<<endl;
    else
        cout<<"list is not full"<<endl;

    u.DeleteItem(1);
    u.PrintList();
    u.DeleteItem(6);
    u.PrintList();

    u.DeleteItem(9);
    //u.PutItem(9);
    //u.PutItem(7);
    u.PrintList();


    return 0;
}
