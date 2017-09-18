#include <iostream>
#include "ItemType.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    ItemType object[5];
    for(int i=0;i<sizeof(object)/sizeof(object[0]);i++)
    {
        object[i].Print();

    }
    object[0].Initilize(5);
    object[1].Initilize(9);
    object[2].Initilize(3);
    object[3].Initilize(95);
    object[4].Initilize(5);

        for(int i=0;i<sizeof(object)/sizeof(object[0]);i++)
    {
        object[i].Print();

    }

        for(int i=0;i<sizeof(object)/sizeof(object[0]);i++)
    {

        RelationType r=object[i].ComparedTo(object[(i+1)%5]);
        switch (r)
        {
        case LESS:
            cout<<"LESS"<<endl;
            break;
        case GREATER:
            cout<< "GREATER"<<endl;
            break;
        case EQUAL:
            cout<< "EQUAL"<<endl<<endl;
            break;
        }

    }





    return 0;
}
