#ifndef TRIANGLE_H
#define TRIANGLE_H

template <typename t>
class Triangle
{
private:
    t base;
    t height;

public:
    Triangle();
    Triangle(t , t);
    void SetBase(t);
    void SetHeight(t);
    t ComputeHypotenuse();
    t ComputeArea();


};





#endif // TRIANGLE_H
#include "Triangle.cpp"
