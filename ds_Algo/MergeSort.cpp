#include<iostream>
using namespace std;
void merge(int *arr,int l,int m,int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	int left_arr[n1];
	int right_arr[n2];
	for(int i=0;i<n1;i++)
	left_arr[i] = arr[l+i];
	for(int j=0;j<n2;j++)
	right_arr[j] = arr[m+1+j];
	int i,j,k;
	i =0,j = 0,k=l;
	while(i<n1&&j<n2)
	{
		if(left_arr[i]<=right_arr[j])
		arr[k++] = left_arr[i++];
		else
		arr[k++] = right_arr[j++];
	 } 
	 while(i<n1)
	 arr[k++] = left_arr[i++];
	 while(j<n2)
	 arr[k++] = right_arr[j++];
}
void mergesort(int *arr,int l,int r)
{
	if(l<r)
	{
	    int mid = (l+r-1)/2;	
		mergesort(arr,l,mid);
	    mergesort(arr,mid+1,r-1);
	    merge(arr,l,mid,r);
	}
}
int main()
{
	int arr[] = {9,8,7,6,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<ends;
}
