#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	vector<int> arr;
	cout<<"enter n and k values";
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	vector<int> :: iterator v;
	bool found = false;
	int i = 0;
	for(i=0;i<n;i++)
	{
		int another = k - arr[i];
		v = find(arr.begin(),arr.end(),another);
		if(v!=arr.end()&&*v!=arr[i])
		{
		 	found = true;
		 	break;
		}
	}
	found == true ? cout<<arr[i]<<' '<<*v : cout<<"not found";
}
