#include<iostream>
#include<climits>
using namespace std;
#include<vector>


// Bishu lives in the Country 1 so this can be considered as the root of the tree.

// the other girls lives in the country from 2 to N

// Input: First line consists of N,i.e number of countries Next N-1 lines follow the type u v which denotes there is a road
//   between u and v. Next line consists of Q Next Q lines consists of x where the girls live.


// Output: Print the id of the country of the girl who will be accepted.

// find the city id of the girl who is living at the min distance
// if two distances are equal then print the city with min city id;
 

bool visited[1001];
vector<int> ar[1001];

void dfs(int v,int dis,int distance[])
{
    visited[v] = 1;
    distance[v] = dis;
    for(auto child : ar[v])
        if(visited[child]==0)
        dfs(child,distance[v]+1,distance);    // finding the distances of each node from root node (1 is root here)
}


int main()
{
    int n;
    cin>>n;
    int e = n-1;
    int u,v;
    int distance[1001];

    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        ar[u].push_back(v);
        ar[v].push_back(u);
    }

    dfs(1,0,distance);

    int q;
    cin>>q;

    int min_dist = INT_MAX;
    int min_id ;

    while(q--)
    {
        int girl_city;
        cin>>girl_city;
        if(distance[girl_city] < min_dist)
        min_dist = distance[girl_city] ,min_id = girl_city;
        else
            if(distance[girl_city] == min_dist && girl_city < min_id)
            min_id = girl_city;
    }
    cout<<min_id;
}
