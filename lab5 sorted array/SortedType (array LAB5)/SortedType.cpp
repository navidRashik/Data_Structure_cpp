#ifndef SORTEDTYPE_CPP
#define SORTEDTYPE_CPP

#include "SortedType.h"
template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length=0;
}
template<class ItemType>
bool SortedType<ItemType>::IsFull() const
{
    return(length==MAX_ITEMS);
}
template<class ItemType>
int SortedType<ItemType>::GetLength() const
{
    return length;
}
template<class ItemType>
ItemType SortedType<ItemType>::GetItem(ItemType item, bool& found)
{
    int midPoint;
    int first = 0;
    int last = length-1;

    bool moreToSearch = first <= last;
    found = false;
    while (moreToSearch && !found)
    {
        midPoint = (first+last) / 2;
        if(item<(info[midPoint])){
            last=midPoint - 1;
            moreToSearch = first<=last;
        }
        else if(item>(info[midPoint])){
            first = midPoint + 1;
            moreToSearch = first<=last;
        }
        else{
            found=true;
            item = info[midPoint];
        }
    }return item;
}
template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template<class ItemType>
void SortedType<ItemType>::PutItem(ItemType item)
{
    bool moreToSearch;
    int location =0;
    moreToSearch=(location<length);
    while (moreToSearch)
    {
        if (item<(info[location])){
            moreToSearch = false;
        }
        else if(item>(info[location])){
            location++;
            moreToSearch= (location<length);
        }
    }
for(int index = length;index>location;index--)
    info[index]= info[index-1];
    info[location]=item;
    length++;
}

template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    bool moreToSearch;
    int location=0;

    moreToSearch = (location<length);
    while(moreToSearch)
    {
        if(item<(info[location]))
            {
                moreToSearch= false;
                cout<<"The item is not in the list"<<endl;
                return;
        }
        else if(item>(info[location])){
            location++;
            moreToSearch = (location<length);
        }
        else{
            moreToSearch=false;
        }
    }
    for(int index =location+1; index<length; index++)
        info[index-1]=info[index];
        length--;
}

template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos= -1;

}
template<class ItemType>
void SortedType<ItemType>::PrintList()
{
    ResetList();
    for(int i=0;i<GetLength();i++)
        cout<<GetNextItem()<<"\t";
        cout<<endl;
}
template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem()
{
    currentPos++;
    return info[currentPos];
}
#endif // SORTEDTYPE_CPP
