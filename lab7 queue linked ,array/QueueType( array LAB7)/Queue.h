#ifndef QUEUE_H
#define QUEUE_H

template<class ItemType>
class Queue
{
public:
    Queue();
    ~Queue();
    Queue(int);
    bool IsEmpty() const;
    bool IsFull() const;
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue();
    void printQueue();
private:
    int head;
    int tail;
    int maxSize;
    ItemType *items;


};





#endif // QUEUE_H_INCLUDED
#include "Queue.cpp"
