#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_by_colors(vector<int> &v)
{
	int low = 0,mid = 0,high = v.size()-1;
	while(mid<=high)
	{
		if(v[mid]==0)
		swap(v[low++],v[mid++]);
		else if(v[mid]==1)
		mid++;
		else if(v[mid]==2)
		swap(v[mid],v[high--]);
	}
}

void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<' ';
}

int main()
{
	int n;
	cin>>n;
	cout<<"enter 0s 1s and 2s";
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort_by_colors(arr);
	print(arr);
}
