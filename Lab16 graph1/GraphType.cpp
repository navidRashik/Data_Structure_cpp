#ifndef GRAPHTYPE_CPP
#define GRAPHTYPE_CPP
#include"GraphType.h"
template<class VertexType>
GraphType<VertexType>::GraphType()
{
    numVerticies = 0;
    maxVerticies = 50;
    verticies = new VertexType[50];
    edges = new int*[50];
    for(int i = 0; i<50; i++)
        edges[i] = new int[50];
    marks = new bool[50];
}
template<class VertexType>
GraphType<VertexType>::GraphType(int maxV)
{
    numVerticies = 0;
    maxVerticies = maxV;
    verticies = new VertexType[maxV];
    edges = new int*[maxV];
    for(int i = 0; i<maxV; i++)
        edges[i] = new int[maxV];
    marks = new bool[maxV];
}
template<class VertexType>
GraphType<VertexType>::~GraphType()
{
    delete [] verticies;
    delete [] marks;
    for(int i = 0; i < maxVerticies; i++)
        delete [] edges[i];
    delete [] edges;
}
template<class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertex)
{
    verticies[numVerticies] = vertex;
    for(int index = 0; index <= numVerticies ;index++)
    {
        edges[numVerticies][index] = NULL_EDGE;
        edges[index][numVerticies] = NULL_EDGE;
    }
    numVerticies++;
}
template<class VertexType>
int IndexIs(VertexType* verticies, VertexType vertex)
{
    int index = 0;
    while(!(vertex == verticies[index]))
        index++;
    return index;
}
template<class VertexType>
void GraphType<VertexType>::AddEdge(VertexType fromVertex, VertexType toVertex, int weight)
{
    int row = IndexIs(verticies, fromVertex);
    int col = IndexIs(verticies, toVertex);
    edges[row][col] = weight;
}
template<class VertexType>
int GraphType<VertexType>::WeightIs(VertexType fromVertex, VertexType toVertex)
{
    int row = IndexIs(verticies, fromVertex);
    int col = IndexIs(verticies, toVertex);
    return edges[row][col];
}
template<class VertexType>
void GraphType<VertexType>::GetToVertex(VertexType vertex, queue<VertexType>& adjVertices)
{
    int fromIndex, toIndex;
    fromIndex = IndexIs(verticies, vertex);
    for(toIndex = 0; toIndex < numVerticies; toIndex++)
    {
        if(edges[fromIndex][toIndex] != NULL_EDGE)
            adjVertices.Enqueue(verticies[toIndex]);
    }
}
template<class VertexType>
void GraphType<VertexType>::PrintGraph()
{
    for (int i =0 ; i< numVerticies ; i++)
        cout<< "\t" <<i;
    cout << endl << endl;
    for(int i = 0 ; i <numVerticies ; i++)
    {
        cout << i ;
        for (int j = 0 ; j <numVerticies ; j++)
        {
            if(WeightIs(verticies[i] , verticies [j])==NULL_EDGE)
                cout<<"\t*";
            else
                cout <<"\t"<<WeightIs(verticies[i] ,verticies[j]);
        }
        cout << endl << endl;
    }
    cout<<endl;
}

template<class VertexType>
int GraphType<VertexType>::OutDegree(VertexType *v)
{

    int x = IndexIs(verticies, *v);
    int count = 0;
    for (int i = 0 ; i<numVerticies; i++ )
    {
        if(edges[x][i] != NULL_EDGE)
            count++;
    }
    return count;
}
template<class VertexType>
int GraphType<VertexType>::InDegree(VertexType *v)
{

    int x = IndexIs(verticies, *v);
    int count = 0;
    for (int i = 0 ; i<numVerticies; i++ )
    {
        if(edges[i][x] != NULL_EDGE)
            count++;
    }
    return count;
}
template<class VertexType>
bool GraphType<VertexType>::IsEdge(VertexType* v, VertexType* w)
{
    int x = IndexIs(verticies, *v);
    int y = IndexIs(verticies, *w);
    return (edges[x][y] != NULL_EDGE || edges[y][x] != NULL_EDGE);
}
#endif // GRAPHTYPE_H_INCLUDED
