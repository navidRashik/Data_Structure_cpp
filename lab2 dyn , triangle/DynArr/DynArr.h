#ifndef DYNARR_H
#define DYNARR_H
template <typename T>
class DynArr
{
private:
    T *data;
    int size;
public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void Set(int,T);
    T Get(int);
    void Allocate(int);
};

#endif // DYNARR_H_INCLUDED
#include "DynArr.cpp"
