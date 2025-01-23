#include<bits/stdc++.h>
using namespace std;

class Graph{
    int numVertices;
    list<int> *adjLists;
    bool *visited;

    public:
        Graph(int v);
        void addEdge(int src, int des);
        void DFS(int vertex);
};

Graph::Graph(int vertices){
    numVertices = vertices;
    adjLists = new list<int>[vertices];
    visited = new bool[vertices];
}

void Graph:: addEdge(int src, int dest){
    adjLists[src].push_front(dest);
}

void Graph::DFS(int vertex){
    visited[vertex] = true;
    list<int>adjList = adjLists[vertex];
    cout<<vertex<<" ";

    list<int>::iterator i;

    for(i = adjList.begin(); i!= adjList.end(); ++i){
        if(!visited[*i]){
            DFS(*i);
        }
    }
}

int main(){
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    graph.DFS(2);
    return 0;
}

