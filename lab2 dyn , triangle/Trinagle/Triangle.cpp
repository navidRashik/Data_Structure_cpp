#ifndef TRIANGLE_CPP
#define TRIANGLE_CPP

#include "Triangle.h"
#include "math.h"
#include <iostream>
using namespace std;

template <typename t>
Triangle<t>::Triangle(){

}

template <typename t>
Triangle<t>::Triangle(t b,t h)
{
    this->base=b;
    this->height=h;
;
}

template <typename t>
void Triangle<t> :: SetBase(t b){
    this->base=b;

}
template <typename t>
void Triangle<t> :: SetHeight(t h){
    this->height=h;
}


template <typename t>
t Triangle<t> :: ComputeHypotenuse()
{
    return base+height;//sqrt((base*base)+(height*height));
}


template <typename t>
t Triangle<t> :: ComputeArea()
{
    return base-height;//(.5*base*height);

}
#endif // TRIANGLE_CPP
