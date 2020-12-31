#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>> min;
	int n;
	int arr[n];
	int k = 2;
	for(int i=0;i<6;i++)
	{
		min.push(arr[i]);
		if(i>=k)
		{
			min.pop();
		}
	}
	cout<<min.top();
}
