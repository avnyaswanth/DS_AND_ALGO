#include<iostream>
using namespace std;
#include<vector>
//   Sort a k sorted array 
// which means the element which has to be at the ith position must be in the range of [i-k,i+k]
#include<queue>
typedef priority_queue<int, vector<int>, greater<int>> p_q;
vector<int> sort_array(p_q min_heap,int *arr,int n,int k)
{
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		min_heap.push(arr[i]);    // as the range is to i+k so we will pop whenever the size becomes k+1 
		if(min_heap.size()>k)  // for 0 the ele the range will be from 0 to 0+3 which means total 4 elems(k+1) size;
		{
			v.push_back(min_heap.top());
			min_heap.pop();
		}
	}
	while(min_heap.empty()!=1)
	{
		v.push_back(min_heap.top());
		min_heap.pop();
	}
	return v;
}
int main()
{
	int n,k;
	cout<<"Enter n and k";
	cin>>n>>k;
	int *arr = new int[n];
	cout<<"Enter array values";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	p_q min_heap;
	vector<int> v = sort_array(min_heap,arr,n,k);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<ends;
}
