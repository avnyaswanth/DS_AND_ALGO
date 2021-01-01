#include<iostream>
#include<vector>
#define mod 1000000007
#define SIZE 100001
using namespace std;


int visited[SIZE];
vector<int> graph[SIZE];
int cc_size;

void dfs(int v)
{
	visited[v] = 1;
	cc_size++;
	
	for(int child : graph[v])
		if(visited[child]==0)
			dfs(child);
}

int main()
{
    int t,n,e,x,y;
    cin>>t;
    
	while(t--)
	{
    	cin>>n>>e;
    	
    	for(int i=1;i<=n;i++)
    	{
    	    graph[i].clear();
    	    visited[i] = 0;
    	}
    	for(int i=1;i<=e;i++)
    	{
    		cin>>x>>y;
    		graph[x].push_back(y);
    		graph[y].push_back(x);
    	}
    	
    	int total_components = 0;
    	long long int answer = 1;
    	for(int i=1;i<=n;i++)
    	{
    		if(visited[i]==0)
    		{
    		    cc_size = 0;
    			total_components++;
    			dfs(i);
    			answer = ((answer % mod) * (cc_size % mod)) % mod;
    		}
    	}
    		
    	cout<<total_components<<" "<<answer<<endl;
	}
		return 0;
}
