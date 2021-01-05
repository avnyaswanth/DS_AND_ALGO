#include<iostream>
using namespace std;
#include<map>
int main()
{
	int n,arr[n],k,flag=0;
	cin>>n;
	cout<<"Enter num for pair sum to check";
	cin>>k;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	map<int,int>m;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==k)
			{
			flag++;
			m.insert({arr[i],arr[j]});	
			}
		}
	}
	if(flag==0)
	cout<<"no pair found";
	else
	{
		map<int,int> :: iterator it;
		it = m.begin();
		while(it!=m.end())
		{
			cout<<it->first<<ends<<it->second<<endl;
			it++;
		}
	}
	return 0;
}
