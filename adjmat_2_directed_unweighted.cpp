/*
 * C++ Program to Implement Adjacency Matrix
 */
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 20
/*
 * Adjacency Matrix Class
 */
class AdjacencyMatrix
{
    private:
        int n;
        bool **adj;
        //bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            this->n = n;
            //visited = new bool [n];
            adj = new bool * [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new bool [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = false;
                }
            }
        }
//        Graph(int numVertices) {
//    this->numVertices = numVertices;
//    adjMatrix = new bool*[numVertices];
//    for (int i = 0; i < numVertices; i++) {
//      adjMatrix[i] = new bool[numVertices];
//      for (int j = 0; j < numVertices; j++)
//        adjMatrix[i][j] = false;
//    }
//  }
        /*
         * Adding Edge to Graph
         */ 
        void add_edge(int origin, int destin)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {   
                cout<<"Invalid edge!\n";
            }
            else
            {
                adj[origin - 1][destin - 1] = true;
            }
        }
        /*
         * Print the graph
         */ 
        void display()
        {
            int i,j;
            for(i = 0;i < n;i++)
            {
                for(j = 0; j < n; j++)
                    cout<<adj[i][j]<<"  ";
                cout<<endl;
            }
        }
};
/*
 * Main
 */ 
int main()
{
    int nodes, max_edges, origin, destin;
    cout<<"Enter number of nodes: ";
    cin>>nodes;
    AdjacencyMatrix am(nodes);
    max_edges = nodes * (nodes - 1);
    for (int i = 0; i < max_edges; i++)
    {
        cout<<"Enter edge (-1 -1 to exit): ";
        cin>>origin>>destin;
        if((origin == -1) && (destin == -1))
            break;
        am.add_edge(origin, destin);
    }
    am.display();
    return 0;
}
