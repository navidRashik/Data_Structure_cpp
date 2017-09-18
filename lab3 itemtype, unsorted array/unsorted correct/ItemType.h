#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include <stdio.h>
#include <iostream>

using namespace std;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType) const;
    void Print() const;
    void Initialize(int number);
private:
    int value;
};


#endif // ITEMTYPE_H_INCLUDED
#include "ItemType.cpp"
