#include<iostream>
#include<cmath>
using namespace std;
#include<queue>
//  finding k closest number for a certain(x) number in an array
typedef priority_queue<pair<int,int>> p_q;
void kclosest(int *arr,int n,int k,int x)
{
	p_q max_heap;
	for(int i=0;i<n;i++)
	{
		max_heap.push({abs(arr[i]-x),arr[i]});
		if(max_heap.size()>k)
		 max_heap.pop();
	}
	while(max_heap.empty()!=1)
	{
		cout<<max_heap.top().second;
		max_heap.pop();
	}	
}
int main(void)
{
	int n,k,x;
	cout<<"enter n,k and x";
	cin>>n>>k>>x;
	int *ar = new int[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	kclosest(ar,n,k,x);
}
//huhu
