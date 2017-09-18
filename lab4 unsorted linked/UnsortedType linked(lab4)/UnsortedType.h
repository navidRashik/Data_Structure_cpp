
#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H
#include <new>
//#include "ItemType.h"
#include <iostream>
using namespace std;


template <class ItemType>
struct NodeType{
    ItemType info;
    NodeType* next;

};

template <class ItemType>
class UnsortedType
{
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void MakeEmpty();
    void ResetList();
    ItemType GetNextItem();
    void PrintList();

private:
    NodeType <ItemType>* listData;
    int length;
    NodeType <ItemType> * currentPos;
};
#endif // UNSORTEDTYPE_H
#include "UnsortedType.cpp"
