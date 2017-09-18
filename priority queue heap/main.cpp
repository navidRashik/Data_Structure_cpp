#include <iostream>
#include "priorityQueue.h"

using namespace std;

int main()
{
   PQType<int> x(12);
   x.Enqueue(11);
   x.Enqueue(9);
   x.Enqueue(4);
   x.Enqueue(7);
   x.Enqueue(8);
   x.Enqueue(3);
   x.Enqueue(1);
   x.Enqueue(2);
   x.Enqueue(5);
   x.Enqueue(6);
   //x.Enqueue(15);
   int a;
   x.Dequeue(a);
   cout<<a<<endl;

   x.Dequeue(a);
   cout<<a<<endl;

   x.Dequeue(a);
   cout<<a<<endl;


}
