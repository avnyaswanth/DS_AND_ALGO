#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
//	int flag;
//	for(int i=0;i<n;i++)
//	{
//		flag = 0;
//		for(int j=i+1;j<n;j++)
//		{
//			if(arr[i]==arr[j])
//			{
//				cout<<arr[i];
//				flag++;
//				break;
//			}
//		}
//		for(int k=i-1;k>=0;k--)
//		{
//			if(arr[i]==arr[k]) 
//			{
//				cout<<arr[i];
//				flag++;
//				break;
//			}
//		}
//		if(flag)
//		break;
//	}
int sum = 0;
int max = INT_MIN;
for(int i=0;i<n;i++)
{
	if(arr[i]>max)
	max = arr[i];
}
for(int i=0;i<n;i++)
sum = sum + arr[i];
int temp = (max*(max+1))/2;
cout<< temp - sum;
}
