#include<iostream>
#include<stack>
using namespace std;
class que
{
	stack<int> s1, s2;
	int size;
	public:
		que()
		{
			size = 0;
		}
		void enque(int x)
		{
				 while (!s1.empty()) { 
	            s2.push(s1.top()); 
	            s1.pop(); 
	        } 
	        s1.push(x); 
	        while (!s2.empty()) { 
	            s1.push(s2.top()); 
	            s2.pop(); 
	        } 
		}
		void deque()
		{
			if(s1.empty())
			return ;
			cout<<s1.top()<<endl;
			s1.pop();
		}
};
int main()
{
	que q;
	q.enque(1);
	q.enque(2);
	q.enque(3);
	q.enque(4);
	q.enque(5);
	q.deque();
	q.deque();
}
