#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements";
	cin>>n;
	int *arr = new int[n];
	int freq[n] = {0},flag = 0,x = 0;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		flag = 0;
		for(int k=i-1;k>=0;k--)  // checking the ele at ith pos with ele's before it whether arr[i] is duplicate or not
		if(arr[i]==arr[k])
		{
			flag++;
			break;
		}
		
		if(flag==0)
		{
			for(int j=i;j<n;j++)   // for finding the freq of the elements
			if(arr[i]==arr[j])
			freq[x]++;
			cout<<arr[i]<<"-->"<<freq[x]<<endl;    //  printing the frequency of the corresponding elements
			x++;
		}
	}
}
