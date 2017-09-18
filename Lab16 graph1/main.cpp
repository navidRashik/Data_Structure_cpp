#include <iostream>
#include"GraphType.h"
using namespace std;

int main()
{
    GraphType<int> g;
    g.AddVertex(0);
    g.AddVertex(1);
    g.AddVertex(2);
    g.AddVertex(3);
    g.AddEdge(1,0,5);
    g.AddEdge(0,3,1);
    g.AddEdge(3,0,3);
    g.AddEdge(3,1,2);
    g.AddEdge(1,2,3);
    g.AddEdge(2,3,8);
    g.PrintGraph();
    int a = 1, b = 2;
    cout << "Out Degree : " << g.OutDegree(&a) << endl;
    cout << "In Degree : " << g.InDegree(&a) << endl;
    if(g.IsEdge(&a, &b))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
