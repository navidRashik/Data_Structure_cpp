#include "DynArr.h"
#include <iostream>

using namespace std;

int main()
{
    DynArr a1();
    DynArr a2(5);
    int s=10;

    a2.set(0,2);
    a2.set(1,1);
    a2.set(2,5);
    a2.set(3,3);
    a2.set(4,4);

    //for(int k=0;k<s;k++){
      //  a1.set(k,k);

//    }
    for(int k=0;a2.get(k)!=NULL;k++){
        cout<<a2.get(k)<<endl;

    }

    //a1.allocate(6);
}
