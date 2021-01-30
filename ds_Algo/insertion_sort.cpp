#include<iostream>
using namespace std;

void insertion_sort(int *arr,int n)
{
	int j;
	for(int i=0;i<n;i++)
	{
		j = i-1;
		int temp = arr[i];
		while( j>=0 && temp<arr[j])
		{
			arr[j+1] = arr[j--];
		}
		arr[j+1] = temp;
	}
}

void print_arr(int *arr,int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<ends;
}

int main()
{
	int n;
	cin>>n; 
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	insertion_sort(arr,n);
	print_arr(arr,n);
}
