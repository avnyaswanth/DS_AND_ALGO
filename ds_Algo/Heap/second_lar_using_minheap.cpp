#include<iostream>
using namespace std;
#include<queue>
//  second largest element
//  this is the same method for the kth largest element
typedef priority_queue<int, vector<int>, greater<int>> p_q;
int second_largest(p_q min_heap,int *arr,int k,int n)
{
	for(int i=0;i<n;i++)
	{
		min_heap.push(arr[i]);
		if(i>=k)
		{
			min_heap.pop();
		}
	}
	return min_heap.top();
}   
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	p_q min_heap;
	int k=2;
	cout<<second_largest(min_heap,arr,k,n);
}

//   min heap will be used for finding kth max element
//   max heap will be used for finding kth min element
//  for min/max heap top element will be min/max element in a priority_queue
//  for priority_queue first element front element will be largest which means it will insert
//  in descending order which means top ele max will so it will be a max heap
//  priority_queue<int, vector<int>, greater<int>>   this will be used for min heap
