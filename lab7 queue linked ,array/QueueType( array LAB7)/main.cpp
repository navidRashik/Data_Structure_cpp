#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue<int> t1;
    int m=6;

    if(t1.IsEmpty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"Queue Is not empty"<<endl;

    t1.Enqueue(5);
    t1.Enqueue(7);
    t1.Enqueue(6);
    t1.Enqueue(9);

    t1.Dequeue();


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

    t1.Dequeue();
    t1.Dequeue();
    t1.Dequeue();
    t1.Dequeue();
    t1.Dequeue();

    cout<<endl;



    Queue<char> t2;

    t2.Enqueue('A' );
    t2.Enqueue('B');
    t2.Enqueue('c');
    t2.Enqueue('d');

    t2.Dequeue();


    t2.Enqueue('E');
    t2.Enqueue('r');



    t2.Dequeue();
    t2.Dequeue();
    t2.Dequeue();
    t2.Dequeue();
    t2.Dequeue();




    return 0;
}
