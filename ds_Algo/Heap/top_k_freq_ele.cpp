#include<iostream>
using namespace std;
#include<unordered_map>
#include<stack>
#include<utility>
#include<queue>
typedef priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > p_q;
//        Top k frequents elements
void top_k_freq_ele(p_q min_heap,unordered_map<int,int> umap,int k)
{
	unordered_map<int,int> ::iterator it;
	stack<int> s;
	for(it=umap.begin();it!=umap.end();it++)
	{
		min_heap.push({it->second,it->first});
		if(min_heap.size()>k)
		{
			min_heap.pop();
		}
	}
	while(min_heap.size()!=0)
	{
			s.push(min_heap.top().second);
			min_heap.pop();
	}
	while(s.size()!=0)
	{
		cout<<s.top()<<ends;
		s.pop();
	}
}
int main()
{
	int n,k;
	cout<<"Enter n and k";
	cin>>n>>k;
	cout<<"Enter the numbers";
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	unordered_map<int,int> umap;
	p_q min_heap;
	for(int i=0;i<n;i++)
	umap[arr[i]]++;
	top_k_freq_ele(min_heap,umap,k);
}
