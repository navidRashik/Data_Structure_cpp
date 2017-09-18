#ifndef MYNUM_CPP
#define MYNUM_CPP

#include "MyNum.h"
#include <iostream>
using namespace std;


MyNum::MyNum(int num)
{
    myNum=num;
    cout<<"object created successfully with Given value"<<endl;

}



MyNum::MyNum()
{
    myNum=0;
    cout<<"object created successfully with default value"<<endl;
}


int MyNum::getMyNum()
{

    return myNum;
}


void MyNum::add(int a){
    myNum+=a;
    cout<<myNum<<endl;

}


void MyNum::subtract(int a)
{

    myNum-=a;
    cout<<myNum<<endl;
}

int MyNum::multiply(int a){

}
#endif // MYNUM_CPP
