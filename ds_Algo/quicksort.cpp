#include "headers.h"

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr,int l,int r)
{
	int i = l-1;
	int pivot = arr[r];
	for(int j=l;j<=r-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}

void print_arr(int *arr,int n)
{
	for(size_t i = 0;i<n;i++)
	cout<<arr[i]<<ends;
}

void quicksort(int *arr,int l,int r)
{
	if(l<r)
	{
		int par = partition(arr,l,r);
		quicksort(arr,l,par-1);
		quicksort(arr,par+1,r);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	quicksort(arr,0,n-1);	
	print_arr(arr,n);
}
