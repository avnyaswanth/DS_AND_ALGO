#include<iostream>
using namespace std;
#include<iterator>
#include<list>
class graph
{
	
	list<int> *lt;
	int V;
	public:
	graph(int v)
	{
		V = v;
		lt = new list<int>[V];
	}
	void create_graph(int v1,int v2)
	{
		lt[v1].push_back(v2);
		lt[v2].push_back(v1);
	}
	void dfs(int);
	void DFS_Traverse(bool*,int);
};
void graph:: DFS_Traverse(bool *visited,int v)
	{
		visited[v] = true;
		cout<<v<<' ';
		list<int> :: iterator it;
		for(it=lt[v].begin();it!=lt[v].end();it++)
		{
			if(!visited[*it])
			DFS_Traverse(visited,*it);
		}
	}
void graph:: dfs(int v)
	{
		bool *visited = new bool[V];
		for(int i=0;i<V;i++)
		visited[i] = false;
		DFS_Traverse(visited,v);
	}
int main()
{
	graph g(4);
	g.create_graph(0,1);
	g.create_graph(0,2);
//	g.create_graph(1,2);
	g.create_graph(2,3);
	g.create_graph(3,3);
	g.dfs(2);
}
