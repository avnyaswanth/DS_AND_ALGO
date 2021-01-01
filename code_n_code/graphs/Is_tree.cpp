#include<bits/stdc++.h>
using namespace std;

// for the graph to be a tree the total num of components is 1 and it should have n - 1 edges where n is vertices count;

void dfs(int v,bool visited[],vector<int> *a)
{
    visited[v] = 1;
    for(int i=0;i<a[v].size();i++)
    {
        if(visited[a[v][i]]==0)
        dfs(a[v][i],visited,a);
    }
}

void graph(int x,int y,vector<int> *a)
{
    a[x].push_back(y);
    a[y].push_back(x);
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> a[v+1];
    int x,y; 
    bool visited[v+1];
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        graph(x,y,a);
    }

    int components = 0;

    for(int i=1;i<v+1;i++)
    {
        if(visited[i]==0)
        {
            dfs(i,visited,a);
            components++;
        }
    }
    if(components==1 && e == v -1)
    cout<<"YES";
    else
    cout<<"NO";
}
