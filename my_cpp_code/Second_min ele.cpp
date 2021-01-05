#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int first_min = INT_MAX,second_min = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<first_min)
		first_min = arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==first_min)
		continue;
		if(arr[i]<second_min)
		second_min = arr[i];
	}
	if(second_min!=INT_MAX)
	cout<<second_min;
	else
	cout<<"no second min";
}
