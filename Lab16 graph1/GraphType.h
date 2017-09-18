#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED

#include<queue>
#include<iostream>
using namespace std;

const int NULL_EDGE = 0;

template<class VertexType>
class GraphType
{
public:
    GraphType();
    GraphType(int maxV);
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void AddVertex(VertexType);
    void AddEdge(VertexType , VertexType , int);
    int WeightIs(VertexType , VertexType);
    void GetToVertex(VertexType, queue<VertexType>&);
    void ClearMarks();
    void MarkVertex(VertexType);
    bool IsMarked(VertexType);
    void PrintGraph();
    int OutDegree(VertexType* v);
    int InDegree(VertexType* v);
    bool IsEdge(VertexType* v, VertexType* w);
private:
    int numVerticies;
    int maxVerticies;
    VertexType* verticies;
    int **edges;
    bool *marks;
};

#endif // GRAPHTYPE_H_INCLUDED
#include"GraphType.cpp"
