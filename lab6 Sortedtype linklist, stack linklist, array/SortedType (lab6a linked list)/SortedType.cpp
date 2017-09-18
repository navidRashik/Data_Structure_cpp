#ifndef SORTEDTYPE_CPP
#define SORTEDTYPE_CPP

#include "SortedType.h"

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length=0;
    listData=NULL;
}

template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
int SortedType<ItemType>::GetLength() const
{
    return length;
}

template<class ItemType>
ItemType SortedType<ItemType>::GetItem(ItemType item, bool& found)
{
    bool moreToSearch;
    NodeType<ItemType>* location;
    location=listData;
    found=false;
    moreToSearch=(location!=NULL);
    while(moreToSearch &&! found)
    {
        if(item!=location->info)
        {
            location=location->next;
            moreToSearch=(location!=NULL);
        }
        else
        {
            found=true;
            item=location->info;
        }

    }
 return item;
}

template<class ItemType>
void SortedType<ItemType>::PutItem(ItemType item)
{
    NodeType<ItemType>* newNode;
    NodeType<ItemType>* predLoc;
    NodeType<ItemType>* location;
    bool moreToSearch;
    location=listData;
    predLoc=NULL;
    moreToSearch=(location!=NULL);
    while(moreToSearch)
    {
        if(location->info<item)
        {
            predLoc=location;
            location=location->next;
            moreToSearch=(location!=NULL);

        }
        else
            moreToSearch=false;
    }
    newNode= new NodeType<ItemType>;
    newNode->info=item;
    if(predLoc==NULL)
    {
        newNode->next=listData;
        listData=newNode;

    }
    else
    {
        newNode->next=location;
        predLoc->next=newNode;
    }
    length++;
}


template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos= NULL;

}
template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    bool found=true;
    GetItem(item,found);
    if(!found)
    {
        cout<<"item is in the list"<<endl;
        return;
    }
    NodeType<ItemType>* location=listData;
    NodeType<ItemType>* tempLocation;
    if(item==location->info)
    {
        tempLocation=location;
        listData=listData->next;
    }
    else
    {
        while(item!=location->next->info)
            location=location->next;
        tempLocation=location->next;
        location->next=location->next->next;
    }
    delete tempLocation;
    length--;
}

template<class ItemType>
void SortedType<ItemType> :: MakeEmpty()
{

    NodeType<ItemType>* tempPtr;
    while(listData != NULL)
    {

        tempPtr =listData;
        listData= listData->next;
        delete tempPtr;


    }
    length=0;
}



template <class ItemType>
ItemType SortedType <ItemType> :: GetNextItem()
{

    if(currentPos==NULL)
        currentPos=listData;
    else
        currentPos=currentPos->next;
    return currentPos->info;
}

template <class ItemType>
bool SortedType<ItemType> :: IsFull() const
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
template <class ItemType>
void SortedType <ItemType> :: PrintList()
{
    ResetList();
    for(int i=0;i<GetLength();i++ )
        cout<<GetNextItem()<<"\t";
    cout<<endl;

}
















#endif
