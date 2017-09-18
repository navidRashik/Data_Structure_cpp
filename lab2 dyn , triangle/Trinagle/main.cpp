#include <iostream>
#include "Triangle.h"

using namespace std;


int main()
{
    Triangle<int> obj1;
    Triangle<double> obj2(7.8,11.2);
    obj1.SetHeight(9);
    obj1.SetHeight(2);
    //Triangle(7.8,8.9);
    obj2.SetBase(7.8);
    obj2.SetHeight(11.2);

    cout<<obj1.ComputeArea()<<endl;
    cout<<obj2.ComputeArea()<<endl;

    cout<<obj1.ComputeHypotenuse()<<endl;
    cout<<obj2.ComputeHypotenuse()<<endl;


    return 0;
}
