#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(vector<int> &arr,int n,int i)
{
	int l = 2*i+1;
	int r = 2*i+2;
	int lar = i;
	if(l<n&&arr[l]>arr[lar])
	lar = l;
	if(r<n&&arr[r]>arr[lar])
	lar = r;
	if(lar!=i)
	{
		swap(&arr[lar],&arr[i]);
		heapify(arr,n,lar);
	}
}


void heapsort(vector<int> &arr,int n)
{
	for(int i = n/2 - 1;i>=0;i--)
	heapify(arr,n,i);
	
	for(int i = n-1;i>=0;i--)
	{
		swap(&arr[i],&arr[0]);
		heapify(arr,i,0);
	}
}

void printarr(vector<int> &arr,int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<ends;
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	heapsort(arr,n);
	printarr(arr,n);
}
