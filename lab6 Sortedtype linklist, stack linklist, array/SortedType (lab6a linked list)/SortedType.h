#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#include<iostream>

using namespace std;

template <class ItemType>
struct NodeType{
ItemType info;
NodeType* next;
};

template<class ItemType>
class SortedType
{
public:
    SortedType();
    ~SortedType();
    bool IsFull() const;
    void MakeEmpty();
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    void PrintList();
    ItemType GetNextItem();

private:
    NodeType<ItemType>* listData;
    int length;
    NodeType<ItemType>* currentPos;
};



#include "SortedType.cpp"
#endif // SORTEDTYPE_H_INCLUDED
