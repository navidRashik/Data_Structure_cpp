

#ifndef UNSORTEDTYPE_CPP
#define UNSORTEDTYPE_CPP

#include "UnsortedType.h"
template <class ItemType>
UnsortedType <ItemType> :: UnsortedType()
{
    length=0;
    listData=NULL;
}



template <class ItemType>
UnsortedType <ItemType> :: ~UnsortedType()
{
    MakeEmpty();

}



template <class ItemType>
int UnsortedType <ItemType>:: GetLength() const
{

    return length;
}



template <class ItemType>
ItemType UnsortedType <ItemType> :: GetItem(ItemType item , bool& found)
{
    bool moreToSearch;
    NodeType <ItemType>* location;
    location= listData;
    found = false;
    moreToSearch =(location !=NULL);
    while(moreToSearch && !found)
    {

        if(item>location->info || item<location->info)
        {

            location=location->next;
            moreToSearch=(location!=NULL);
        }
        else{
            found=true;
            item=location->info;
        }

    }

    return item;

}


template <class ItemType>
void UnsortedType<ItemType> :: PutItem( ItemType item)
{
    NodeType<ItemType>* location;
    location =new NodeType<ItemType>;
    location->info=item;
    location->next=listData;
    listData= location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType> :: DeleteItem(ItemType item)
{
    NodeType<ItemType>* location=listData;
    NodeType<ItemType>* tempLocation;
    if(item==(location->info))
    {
        tempLocation=location;
        listData=listData->next;
    }
    else{
        while(item!=location->next->info)
         {
             location=location->next;
         }
         //delete node at location->next
         tempLocation=location->next;
         location->next=location->next->next;

    }
    delete tempLocation;
    length--;
}


template<class ItemType>
void UnsortedType<ItemType> :: MakeEmpty()
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
ItemType UnsortedType <ItemType> :: GetNextItem()
{

    if(currentPos==NULL)
        currentPos=listData;
    else
        currentPos=currentPos->next;
    return currentPos->info;
}



template <class ItemType>
void UnsortedType<ItemType> :: ResetList()
{
    currentPos=NULL;
}


template <class ItemType>
void UnsortedType <ItemType> :: PrintList()
{
    ResetList();
    for(int i=0;i<GetLength();i++ )
        cout<<GetNextItem()<<"\t";
    cout<<endl;

}

template <class ItemType>
bool UnsortedType<ItemType> :: IsFull() const
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
#endif

