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
    g.AddVertex(4);
    g.AddVertex(5);
    g.AddVertex(6);
    g.AddEdge(1, 0, 1);
    g.AddEdge(0, 1, 1);
    g.AddEdge(1, 3, 1);
    g.AddEdge(3, 1, 1);
    g.AddEdge(0, 2, 1);
    g.AddEdge(2, 0, 1);
    g.AddEdge(2, 3, 1);
    g.AddEdge(3, 2, 1);
    g.AddEdge(3, 6, 1);
    g.AddEdge(6, 3, 1);
    g.AddEdge(2, 5, 1);
    g.AddEdge(5, 2, 1);
    g.AddEdge(4, 5, 1);
    g.AddEdge(4, 6, 1);
    g.AddEdge(5, 4, 1);
    g.AddEdge(6, 4, 1);
    g.PrintGraph();

    int a = 0, b = 4;
    int c=1,d=6;
    cout << "Out Degree : " << g.OutDegree(&a) << endl;
    cout << "In Degree : " << g.InDegree(&a) << endl;
    if(g.IsEdge(&a, &b))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    g.BreadthFirstSearch(a, b);
    cout  << endl;
    g.DepthFirstSearch(c, d);
    cout  << endl;
    if(g.IsCycle(&a))
        cout << "True" << endl;
    else
        cout << "False" << endl;


    return 0;
}
