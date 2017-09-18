#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"
#include<iostream>
using namespace std;

template<class ItemType>
Queue<ItemType>::Queue()
{
    maxSize=6;
    head=-1;
    tail=-1;
    items=new ItemType[maxSize];

}

template <class ItemType>
Queue<ItemType>::Queue(int max)
{


    maxSize=max;
    head=-1;
    tail=-1;
    items=new ItemType[maxSize];

}
template <class ItemType>
Queue<ItemType>::~Queue()
{


    delete[] items;
}

template<class ItemType>
bool Queue<ItemType>::IsFull() const
{
    return (tail==maxSize-1);


}
template<class ItemType>
bool Queue<ItemType>::IsEmpty() const
{
    return (head==tail);


}
template<class ItemType>
void Queue<ItemType>::MakeEmpty()
{
    while(!IsEmpty())
    Dequeue();

}

template<class ItemType>
void Queue<ItemType>::Enqueue(ItemType item)
{

    if(IsFull())
        cout<<"Queue Overflow"<<endl;
    else
        items[++tail]=item;

}
template<class ItemType>
void Queue<ItemType>::Dequeue()
{

    if(IsEmpty())
    {

        cout<<"Queue Underflow"<<endl;
        return;
    }
    cout<<"Deleted"<<" "<<items[++head]<<endl;
}

template <class ItemType>
void Queue<ItemType>::printQueue()
{

    for(int i=0;i<maxSize;i++)
        {
        cout<<items[i]<<endl;
        }


}

#endif // QUEUETYPE_CPP
