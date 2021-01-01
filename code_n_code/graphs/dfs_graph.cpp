#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void dfs(int x,bool visited[],vector<int> *v)
{
		visited[x] = 1;
		cout<<x<<" ";
	for(int i=0;i<v[x].size();i++)
	{
		int child = v[x][i];
		if(visited[child]==0)
		dfs(child,visited,v);
	}
}

void graph(int v1,int v2,vector<int> *v)
{
	v[v1].push_back(v2);
	v[v2].push_back(v1);
}

void connections(vector<int> *v,int n)
{
	vector<int> :: iterator it;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"->";
		for(it=v[i].begin();it!=v[i].end();it++)
		cout<<*it<<ends;
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter number of vertices";
	cin>>n;
	vector<int> v[n+1];
	cout<<"enter vertices";
	int x,y;
	for(int i=0;i<7;i++)
	{
		cin>>x>>y;
		graph(x,y,v);
	}
	bool visited[n+1];
	dfs(2,visited,v);
//	connections(v,n);
	
}
