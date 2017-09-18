#ifndef QUEUETYPE_CPP
#define QUEUETYPE_CPP

#include "QueueType.h"
#include <iostream>

template <class ItemType>
QueueType<ItemType>::QueueType()
{
    front = NULL;
    rear = NULL;
}

template <class ItemType>
QueueType <ItemType>::~QueueType()
{
    MakeEmpty();
}

template <class ItemType>
void QueueType<ItemType>::MakeEmpty()
{
    NodeType<ItemType> * tempPtr;
    while(front!= NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template <class ItemType>
bool QueueType<ItemType>::IsEmpty() const
{
    return (front == NULL);
}
template <class ItemType>
bool QueueType<ItemType> :: IsFull() const
{
    NodeType<ItemType>* location;

    try
    {
        location = new NodeType<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc e)
    {
        return false;
    }
}
template <class ItemType>
void QueueType<ItemType>::Enqueue(ItemType newItem)
{
    if(IsFull())
      throw FullQueue();

    else
    {
        NodeType<ItemType>* newNode;
        newNode = new NodeType<ItemType>;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
           front = newNode;
        else
            rear->next =  newNode;
        rear = newNode;
    }
}
template <class ItemType>
void QueueType<ItemType> :: Dequeue(ItemType& item)
{
    if(IsEmpty())
       throw EmptyQueue();

    else
    {
        NodeType<ItemType>* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;

        if(front==NULL)
           rear = NULL;

        delete tempPtr;
    }
}



#endif //QUEUETYPE_LL_CPP
