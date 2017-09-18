#include <iostream>
#include "ItemType.h"
#include "UnsortedType.h"
using namespace std;
int main()
{
    UnsortedType u;
    cout << "Length " << u.GetLength();
    ItemType a[5];
    int x;
    for(int i =0;i<4;i++)
    {
        cin>>x;
        a[i].Initialize(x);
    }
    for(int i =0;i<4;i++)
    {
        u.PutItem(a[i]);
    }
    u.PrintList();

    cin >> x;
    a[4].Initialize(x);
    u.PutItem(a[4]);
    u.PrintList();
/*
    ItemType a2;
    bool f;

    int x1;

    for(int mm=0;mm<4;mm++){


        cin>>x1;
        a2.Initialize(x1);
        u.GetItem(a2,f);
        if(f)
            cout << "Item Found" << endl;
        else
            cout << "Item Not Found" << endl;

    }

*/

    ItemType b[4];
    bool f;


    //uns.GetItem(A[0],f);
    b[0].Initialize(4);
    b[1].Initialize(5);
    b[2].Initialize(9);
    b[3].Initialize(10);


    //for loop dilei prob kore
    for(int n=0;n<4;n++)
        {

            //bool f=true;
            u.GetItem(b[n],f);

            switch (f)
            {
            case false:
                cout<< "Item not found"<<endl;
                break;
            case true:
                cout<< "Item is found"<<endl;
                break;
            }
        }

    if(u.IsFull())
        cout<<"list full" <<endl;
    else
        cout<<" list is not full"<<endl;

    u.DeleteItem(a[0]);
    if(u.IsFull())
        cout<<"list full" <<endl;
    else
        cout<<"list is not full"<<endl;
    u.DeleteItem(a[1]);
    u.PrintList();

    u.DeleteItem(a[2]);
    u.PrintList();
    u.DeleteItem(a[3]);
    u.PrintList();

    return 0;
}







