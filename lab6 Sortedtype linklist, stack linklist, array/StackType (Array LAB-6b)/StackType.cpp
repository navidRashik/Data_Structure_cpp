#ifndef STACKTYPE_CPP
#define STACKTYPE_CPP
#include "StackType.h"
#include<iostream>
#define max 5
template<class T>
StackType<T>::StackType()
{
    top=-1;
    cout<<"initializing\n";
}

template<class T>
void StackType<T>::Push(T item)
{
    if(IsFull())
    {
        cout<<"Fullstack exception"<<endl;
    }
    top++;
    items[top]=item;
}

template<class T>
void StackType<T>::Pop()
{
    if(IsEmpty())
        cout<<"emptystack exception"<<endl;
    top--;
}

template <class T>
T StackType<T>::Top() const
{
    if(IsEmpty())
        cout<<"emptystack exception for top "<<endl;
    return items[top];
}

template<class T>
bool StackType<T>::IsEmpty() const
{

    return top==-1;
}


template<class T>
bool StackType<T>::IsFull() const
{
    return (top==max);
}
#endif
