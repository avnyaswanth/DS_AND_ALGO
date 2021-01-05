#define SIZE 1000
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int hashtable[SIZE];
int hashcode(int key)
{
	return(key%SIZE);
}
void insert(int key)
{
	int idx = hashcode(key);
	while(hashtable[idx]!=-1)
	{
		idx = (idx + 1) % SIZE;
	}
	hashtable[idx] = key;
}
int search(int target)
{
	int idx = hashcode(target);
	while(hashtable[idx]!=target&&hashtable[idx]!=-1)
	{
		idx = (idx+1)%SIZE;
	}
	return(hashtable[idx]==target);
}
int main()
{
	vector<int> v;
	cout<<"Enter elements";
	
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<"Enter the element to search";
		int target;
		cin>>target;
		for(int i=0;i<v.size();i++)
			insert(v[i]);
		if(search(target))
			cout<<"found";
		else
			cout<<"Not found";
}
