#ifndef STACKTYPE_H
#define STACKTYPE_H
#define max 5
using namespace std;


template<class T>
class StackType
{
public:
    StackType();
    bool IsEmpty()const;
    bool IsFull() const;
    void Push(T item);
    void Pop();
    T Top() const;
private:
    int top;
    T items[max];

};












#endif // STACKARRAY_H_INCLUDED
#include "StackType.cpp"
