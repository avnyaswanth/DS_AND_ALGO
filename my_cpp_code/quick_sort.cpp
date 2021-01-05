#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int *arr,int l,int h)
{
	int pivot = arr[h];
	int i = l;
	for(int j=l;j<=h-1;j++)
	{
		if(arr[j]<pivot)
		{
			swap(&arr[j],&arr[i]);
				i++;
		}
	}
	swap(&arr[i],&arr[h]);
	return i;
}
void quick_sort(int *arr,int l,int h)
{
	if(l<h)
	{
		int p = partition(arr,l,h);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,h);
	}
}
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	quick_sort(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<ends;
}
