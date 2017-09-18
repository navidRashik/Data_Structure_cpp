#include <iostream>
#include "DynArr.h"
#define N 5
using namespace std;

int main()
{
    DynArr<int> d(N);
    d.Set(0,5);
    d.Set(1,7);
    d.Set(2,3);
    d.Set(3,33);
    d.Set(4,34);
    //d.Set();
    for(int i=0;i<N;i++){
        cout<<d.Get(i)<<endl;
    }

    DynArr<double> d1(N);
    d1.Set(1,2.5);
    d1.Set(2,7.884);
    d1.Set(0,1.9);
    d1.Set(3,33.4);
    d1.Set(4,3.4);
    //d.Set();
    for(int i=0;i<N;i++){
        cout<<d1.Get(i)<<endl;
    }


    DynArr<char> dc(N);
    dc.Set(1,'C');
    dc.Set(2,'%');
    dc.Set(0,'x');
    dc.Set(3,'w');
    dc.Set(4,'%');
    //d.Set();
    for(int i=0;i<N;i++){
        cout<<dc.Get(i)<<endl;
    }
    return 0;
}
