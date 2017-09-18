#include <iostream>
#include "QueueType.h"
using namespace std;

int main()
{
    QueueType<int> t1;
    if(t1.IsEmpty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"Queue Is not empty"<<endl;

    t1.Enqueue(5);
    t1.Enqueue(7);
    t1.Enqueue(6);
    t1.Enqueue(9);

    int dq;
    t1.Dequeue(dq);
    cout<<dq<<endl;

    t1.Enqueue(10);
    t1.Enqueue(8);

    if(t1.IsEmpty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"Queue Is not empty"<<endl;



    if(t1.IsFull())
        cout<<"queue is full"<<endl;
    else
        cout<<"Queue Is not full"<<endl;

    t1.Dequeue(dq);
    cout<<dq<<endl;
    t1.Dequeue(dq);
    cout<<dq<<endl;
    t1.Dequeue(dq);
    cout<<dq<<endl;
    t1.Dequeue(dq);
    cout<<dq<<endl;
    t1.Dequeue(dq);
    cout<<dq<<endl;

    cout<<endl;



    QueueType<char> t2;

    t2.Enqueue('A' );
    t2.Enqueue('B');
    t2.Enqueue('c');
    t2.Enqueue('d');

    char dq1;
    t2.Dequeue(dq1);
    cout<<dq1<<endl;

    t2.Enqueue('E');
    t2.Enqueue('r');

    t2.Dequeue(dq1);
    cout<<dq1<<endl;
    t2.Dequeue(dq1);
    cout<<dq1<<endl;
    t2.Dequeue(dq1);
    cout<<dq1<<endl;
    t2.Dequeue(dq1);
    cout<<dq1<<endl;
    t2.Dequeue(dq1);
    cout<<dq1<<endl;


    try
    {
        t2.Dequeue(dq1);
    }
    catch(EmptyQueue e)
    {
        cout<<"caught by driver "<<endl;
    }



    try
    {
        t2.Dequeue(dq1);
    }
    catch(EmptyQueue e)
    {
        cout<<"empty queue qxception thrown "<<endl;
    }


    return 0;
}
