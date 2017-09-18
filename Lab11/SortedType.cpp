#ifndef  SORTEDTYPE_CPP
#define  SORTEDTYPE_CPP

#include "SortedType.h"
template<class ItemType>
SortedType<ItemType>:: SortedType()
{
    length=0;
    listData=NULL;
}

template<class ItemType>
SortedType<ItemType>:: ~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
int SortedType<ItemType>:: GetLength() const
{
    return length;
}

template<class ItemType>
void SortedType<ItemType>:: PutItem(ItemType item)
{
    Insert(listData,item);
}

template<class ItemType>
void SortedType<ItemType>:: Insert(NodeType<ItemType>*&listPtr ,ItemType item)
{
    if(listPtr == NULL || item < listPtr->info)
    {
        NodeType<ItemType>* tempPtr= listPtr;
        listPtr=new NodeType<ItemType>;
        listPtr->info= item;
        listPtr->next= tempPtr;
    }
    else
        Insert(listPtr->next, item);
}

template<class ItemType>
void SortedType<ItemType>:: DeleteItem(ItemType item)
{
    Delete(listData,item);
}

template<class ItemType>
void SortedType<ItemType>:: Delete(NodeType<ItemType>* &listPtr, ItemType item)
{
    if(item==listPtr->info)
    {
        NodeType<ItemType>* tempPtr=listPtr;
        listPtr=listPtr->next;
        delete tempPtr;
    }
    else
        Delete(listPtr->next,item);
}

template<class ItemType>
void SortedType<ItemType>:: MakeEmpty()
{
    Empty(listData);
    length=0;
}

template<class ItemType>
void SortedType<ItemType>::Empty(NodeType<ItemType>* &listPtr)
{
    if(listData!=NULL)
    {
        NodeType<ItemType>* tempPtr;
        tempPtr=listData;
        listData=listData->next;
        delete tempPtr;
        Empty(listPtr->next);
    }
}

template<class ItemType>
bool SortedType<ItemType>:: IsFull() const
{
    NodeType<ItemType>* location;
    try
    {
        location= new NodeType<ItemType>;
        delete location;
        return false;
    }
    catch(bad_alloc &exception)
    {
        return true;
    }
}

template<class ItemType>
void SortedType<ItemType>:: PrintList()
{
    RevPrint(listData);
    cout<<endl;
}

template<class ItemType>
void SortedType<ItemType>:: RevPrint(NodeType<ItemType>* listPtr)
{
    if(listPtr!=NULL)
    {
        RevPrint(listPtr->next);
        cout << listPtr->info << " ";
    }
}

#endif // SORTEDTYPE_CPP


/*
template<class ItemType>
void SortedType<ItemType>:: MakeEmpty()
{
    NodeType<ItemType>* tempPtr;
    while(listData!=NULL)
    {
        tempPtr=listData;
        listData=listData->next;
        delete tempPtr;
    }
    length=0;
}
*/
