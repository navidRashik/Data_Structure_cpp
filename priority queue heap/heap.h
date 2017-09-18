#ifndef HEAP_H
#define HEAP_H

template <class ItemType>

class HeapType
{
public:
    void ReheapDown(int, int);
    void ReheapUp(int , int);
    ItemType *elements; //dynamic array
    int numElements;
};
#endif // HEAP_H
#include "heap.cpp"


/*We can arrays in order to store heaps.
Root at index 0.
For any value at index i,
Left child at index 2i+1
Right child at index 2i+2
For any value at index i
Parent is at index (i-1)/2
*/
