#include <iostream>
#include "StackType.h"

using namespace std;

int main()
{
    StackType<int> t1;

    if(t1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;

    cout<<"give item"<<endl;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        t1.Push(x);
    }
    cout<<endl;


    for(int i=0;i<4;i++)
    {
        cout<<t1.Top()<<" ,";
        t1.Pop();

    }
    cout<<endl;

    t1.Push(5);
    t1.Pop();
    t1.Push(3);
    t1.Push(7);
    t1.Pop();
    cout<<t1.Top()<<endl;

    t1.Pop();
    if(t1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;


    t1.Push(88);
    if(t1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;


    t1.Pop();
    if(t1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;

    cout<<" ------------------"<<endl;
    //t1.Pop();

    t1.Push(1);
    t1.Push(2);
    t1.Push(3);
    t1.Push(4);
    t1.Push(5);
    t1.Push(6);
    StackType<int> s1;
    s1.Pop();
    s1.Top();



    return 0;

    return 0;
}
