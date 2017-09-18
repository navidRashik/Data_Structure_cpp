#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#include "ItemType.h"
using namespace std;
const int MAX_ITEMS = 5;

class UnsortedType
{
    public:

    UnsortedType();
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found);
    void PutItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetList();
    ItemType GetNextItem();
    void PrintList();
    private:

    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif //UNSORTEDTYPE_H
#include "UnsortedType.cpp"
