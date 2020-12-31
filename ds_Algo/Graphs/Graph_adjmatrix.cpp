#include<iostream>
using namespace std;
//   Graph representation using Adjacency Matrix
class Graph
{
	int v;
	int **adj;
	public:
		Graph(int v)
		{
			this->v = v;
			adj = new int*[v];
			for(int i=0;i<v;i++)
			{
				adj[i] = new int[v];
				for(int j=0;j<v;j++)
				adj[i][j] = 0;
			}
		}
		void add_vertices(int u,int v)
		{
			adj[u][v] = 1;
			adj[v][u] = 1;
		}
		void traverse()
		{
			for(int i=0;i<v;i++)
			{
			 for(int j=0;j<v;j++)
			 cout<<adj[i][j]<<ends;
			 cout<<endl;
		    }
		}
};
int main()
{
	Graph g(4);
	g.add_vertices(0,1);
	g.add_vertices(0,2);
	g.add_vertices(0,3);
	g.add_vertices(1,2);
	g.add_vertices(2,3);
	g.traverse();
}
