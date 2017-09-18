#include <iostream>
#include "MyNum.h"

using namespace std;

int main()
{
    MyNum m1(66);
    m1.add(55);
    m1.subtract(2);
    cout<<m1.getMyNum()<<endl;
    return 0;
}
