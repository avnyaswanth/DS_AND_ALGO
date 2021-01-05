#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	list<int> *lt;
	lt = new list<int>[3];
	
	// here we are creating a list of objects for each object we can create a list 
	//  example: lt[0],lt[1],lt[2] are list objects	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		lt[i].push_back(j+i);
	}
	//cout<<(&(lt[0].front())<<endl;
	list<int> :: iterator it;
	for(int i=0;i<3;i++)
	{
	for(it = lt->begin();it!=lt->end();it++)
	cout<<*it<<ends;
	lt++;
	cout<<endl;
}
//	for(int i=0;i<10;i++)
//	lt.push_back(i);
//	list<int> :: iterator it;
//	for(it=lt.begin();it!=lt.end();it++)
//	cout<<*it<<ends;
//	cout<<lt.front()<<endl;
//	cout<<lt.back()<<endl;
////	lt.reverse();
//	cout<<lt.size()<<endl;
//	lt.sort();
//	it = lt.begin();
//	lt.erase(it,lt.end());
//		for(it=lt.begin();it!=lt.end();it++)
//	cout<<*it<<ends;
}
