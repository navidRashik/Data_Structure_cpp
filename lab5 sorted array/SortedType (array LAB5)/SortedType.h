#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H
#include<iostream>

using namespace std;
const int MAX_ITEMS =5;

template <class ItemType>
class SortedType
{
public:
    SortedType();
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
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif //SORTETYPE_H
#include "SortedType.cpp"


