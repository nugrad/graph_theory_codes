
 
#include<iostream>
using namespace std;
 
#define N 100
 
/*
 * Graph is the graph representation in adjacency matrix
 */
int Graph[N][N];
 
/*
 * u is the current or source vertex
 * v is the next or destination vertex
 * w is the edge weight or path cost
 */
 
int vertices, edges;
int u, v, w;
int i, j;
 
void InputGraph(){
    cout<<"Enter vertices and Edges : ";
    cin>>vertices>>edges;
 
    // Reset graph
    for(i = 0; i < vertices; ++i)
        for(j = 0; j < vertices; ++j)
            Graph[i][j] = 0;
 
    // Input Graph
    cout<<"Enter (u v w):\n";
    for(i = 0; i < edges; ++i){
       cin>>u>>v>>w;
        Graph[u][v] = w;
    }
}
 
void PrintGraph(){
    // Print the current Graph
    
    cout<<"Graph:\n";
    for(i = 0; i < vertices; ++i){
        for(j = 0; j < vertices; ++j)
            cout<< Graph[i][j];
        cout<<"\n";
    }
    cout<<"\n";
    
}
 
int main(){
 
    cout<<"Directed Weighted Graph:\n";
    cout<<"============================\n\n";
 
    InputGraph();
    PrintGraph();
 
    return 0;
}
