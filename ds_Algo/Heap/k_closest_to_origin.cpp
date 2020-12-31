#include<iostream>
using namespace std;
#include<map>
#include<utility>
#include<queue>
 typedef pair<int,pair<int,int>> pr;
 void k_closest_to_origin(map<int,int>arr,int k)
 {
 	priority_queue<pr> max_heap;
 	map<int,int> :: iterator it;
 	it = arr.begin();
 	for(int i=0;i<arr.size();i++)
 	{
 		max_heap.push({it->first*it->first+it->second*it->second,{it->first,it->second}});
 		if(max_heap.size()>k)
 		{
 			max_heap.pop();
		 }
		 it++;
	 }
	 while(max_heap.size()!=0)
	 {
	 	pair<int,int> p = max_heap.top().second;
	 	cout<<p.first<<' '<<p.second<<endl;
	 	max_heap.pop();
	 }
 }
 int main()
 {
 	map<int,int>arr;
 	int n,k;
 	cout<<"enter n and k";
 	cin>>n>>k;
 	cout<<"Enter x,y coordinates";
 	for(int i=0;i<n;i++)
 	{
 		int x,y;
 		cin>>x>>y;
 		arr.insert({x,y});
	 }
	 k_closest_to_origin(arr,k);
 }
