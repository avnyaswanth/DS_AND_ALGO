#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> graph[10001];
bool visited[10001];

int maxdist,maxnode;

void dfs(int node,int d)
{
	visited[node] = 1;
	if(d > maxdist) 
	{
		maxdist = d;
		maxnode = node;
	}
	for(int i=0;i<graph[node].size();i++)
	{
		int child = graph[node][i];
		if(visited[child]==0)
		dfs(child,d+1);
	}
}

int main()
{
		int v,x,y;
		cin>>v;
		for(int i=1;i<=v-1;i++)
		{
			cin>>x>>y;
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		
		int ele = rand() % v + 1;
		maxdist = -1;
		dfs(ele,0);
	
		for(int i=1;i<=v;i++)
			visited[i] = 0;
		maxdist = -1;
		dfs(maxnode,0);
		cout<<maxdist;
}
