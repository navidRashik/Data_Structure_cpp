#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H
#include <iostream>
using namespace std;

template<class ItemType>
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
    int GetLength() const;
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void MakeEmpty();
    void PrintList();
private:
    NodeType<ItemType>* listData;
    int length;
    NodeType<ItemType>* currentPos;
    void RevPrint(NodeType<ItemType>* listPtr);
    void Insert(NodeType<ItemType>*& listPtr, ItemType item);
    void Delete(NodeType<ItemType>*& listPtr, ItemType item);
    void Empty(NodeType<ItemType>* &listPtr);
};
#endif // SORTEDTYPE_H_INCLUDED
#include"SortedType.cpp"
