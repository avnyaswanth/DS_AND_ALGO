#include<iostream>
#include<list>
#include<iterator>
// using c++ stl 
//  Adjacency list
using namespace std;
class graph
{
	public:
	list<int> *lt;
	int v;
	graph(int v)
	{
		this->v = v;
		lt = new list<int>[v];
	}
	void create_graph(int v1,int v2)
	{
		lt[v1].push_back(v2);
		lt[v2].push_back(v1);
	}
	void connections(char *arr)
	{
		list<int>:: iterator it;
		for(int i=0;i<v;i++)
		{
			cout<<arr[i];
			for(it=lt->begin();it!=lt->end();it++)
			cout<<"->"<<arr[*it];
			cout<<endl;
			lt++;
		}
	}
};
int main()
{
	char arr[] = {'a','b','c','d'};
	graph g(4);
	g.create_graph(0,1);
	g.create_graph(0,2);
	g.create_graph(0,3);
	g.create_graph(1,2);
	g.create_graph(2,3);
	g.connections(arr);
}
