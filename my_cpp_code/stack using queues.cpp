#include<iostream>
#include<queue>
using namespace std;
class Stk
{
	queue<int> q1, q2;
	int size;
	public:
	Stk()
	{
		size = 0;
	}
	void push(int x)
	{
		q2.push(x);
		size++;
		while(q1.empty()!=1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}
	void pop()
	{
		if(q1.empty())
		return;
		q1.pop();
		size--;
	}
	int top()
	{
		if(q1.empty())
		return -1;
		return q1.front();
	}
	int cur_size()
	{
		return size;
	}
};
int main()
{
	Stk s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout<<s.top()<<endl;
	cout<<s.cur_size();
}
