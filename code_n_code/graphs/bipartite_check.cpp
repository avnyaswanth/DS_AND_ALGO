#include<iostream>
#include<vector>
//#define vi vector<int>
//#define i_ int

// a graph is bipartite
// if it can be divided into 2 disjoint sets of vertices and
// there is atleast one edge possible beteween the two sets vertices
 
using namespace std;
bool color[1000];
bool visited[1000];

bool bipartite_check(int v,bool c,vector<int> *g)
{
	visited[v] = 1;
	color[v] = c;
	for(int i=0;i<g[v].size();i++)
	{
		int child = g[v][i];
		if(visited[child]==0)
		{
			if(bipartite_check(child,c^1,g)==false)
			return false;
		}
		else
		if(color[v]==color[child])
			return false; 
	}
	return true; 
}

int main()
{
	int nv,ne;
	cout<<"enter number of vertices and edges";
	cin>>nv>>ne;
	vector<int> g[nv+1];
	int x,y;
	cout<<"enter the edges";
	for(int i=0;i<ne;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	bipartite_check(1,0,g) == 1 ? cout<<"Bipartite" : cout<<"Not Bipartite";  // calling dfs over vertex 1 sending the color code for 1 as 0;
	for(int i=1;i<=nv;i++)
	{
		if(color[i]==0)
		cout<<"color '0' vertex: "<<i<<endl;
		else
		cout<<"color '1' vertex: "<<i<<endl;
	}
}
