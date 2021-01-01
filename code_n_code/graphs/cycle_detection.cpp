#include<iostream>
#include<vector>
//#define vi vector<int>
//#define i_ int

using namespace std;
bool visited[1000];

bool dfs(int node,int parent,vector<int> *g)
{
	visited[node] = 1;
	for(int i=0;i<g[node].size();i++)
	{
		int child = g[node][i];
		if(visited[child]==0)
		{
			if(dfs(child,node,g)==true)
			return true;
		}
		else 
		if(child!=parent)
		return true;
	}
	return false; 
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
	bool res,flag = false ;
	for(int i=1;i<=nv;i++)
	{
		if(visited[i]==0)
		{
			res = dfs(i,-1,g);
			if(res == true)
			flag = true;
			break;
		}
	}
	if(flag)
	cout<<"Cycle is detected";
	else cout<<"No Cycle";
}
