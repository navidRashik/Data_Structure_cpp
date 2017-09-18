#ifndef DYNARR_CPP
#define DYNARR_CPP


#include"DynArr.h"
#include<iostream>

using namespace std;
template <typename T>
DynArr<T>::DynArr()
{
    data=NULL;
    size=0;
}
template <typename T>
DynArr<T>::DynArr(int s)
{
    data=new T[s];
    size=s;
}
template <typename T>
DynArr<T>::~DynArr()
{
    delete [] data;

}
template <typename T>
T DynArr<T>::Get(int index)
{
    return data[index];
}
template <typename T>
void DynArr<T>::Set(int index,T value)
{
    data[index]=value;

}
 #endif // DYNARR_H
