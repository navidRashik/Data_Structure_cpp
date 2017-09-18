#ifndef DYNARR_CPP
#define DYNARR_CPP

#include "DynArr.h"
#include <iostream>

using namespace std;

DynArr::DynArr()
{
    //int s=10;
    //data=NULL;
    //size=0;
    allocate(10);


}

DynArr:: DynArr(int a){
    data = new int[a];
    size=a;

}

DynArr::~DynArr()
{
    delete [] data;

}


int DynArr::get(int index){

    return data[index];

}


void DynArr::set(int index,int value){
    data[index]=value;

}


void DynArr::allocate(int a){
    data = new int[a];
    size=a;

}
#endif // DYNARR_CPP
