#include<iostream>
#include<vector>
#include<iterator>
#include<queue>
using namespace std;

queue<int> q;

void bfs(int x,bool visited[],vector<int> *v)
{	
	visited[x] = 1;
	q.push(x);
	while(!q.empty())
	{
		int s = q.front();
		cout<<s<<ends;
		q.pop();
		for(int i=0;i<v[s].size();i++)
		{
			if(visited[v[s][i]]==0)
			{
				visited[v[s][i]] = 1;
				q.push(v[s][i]);
			}
		}
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
	for(int i=0;i<8;i++)
	{
		cin>>x>>y;
		graph(x,y,v);
	}
	bool visited[n+1];
	bfs(1,visited,v);
//	connections(v,n);

}
