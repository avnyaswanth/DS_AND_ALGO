#include<iostream>
using namespace std;
class Stack
{
 int capacity,top=-1,*stack;
 public:
 Stack(int cap)
 {
 	capacity = cap;
 	stack = new int[capacity];
  }	
  void push(int ele)
  {
  	if(top==capacity-1)
  	cout<<"Stack overflow"<<endl;
  	else
  	{
  		top++;
  		stack[top] = ele;
	  }
  }
  void pop()
  {
  	if(top == -1)
  	cout<<"Stack underflow"<<endl;
  	else
  	{
  		cout<<"Popped element: "<<stack[top]<<endl;
  		top--;
	  }
  }
  void display()
  {
  	if(top==-1)
  	cout<<"No elements in stack";
  	else
  	{
  		for(int i=0;i<=top;i++)
  		cout<<stack[i]<<ends;
  		cout<<endl;
	  }
  }
};
int main()
{
	int cap;
	cout<<"Enter stack capacity";
	cin>>cap;
	Stack stk(cap);
	int n;
	while(1)
	{
		cout<<"Enter\n1.To push\n2.To pop\n3.To display";
		cin>>n;
		switch(n)
		{
			case 1: int x;
			cout<<"Enter the element to push";
			cin>>x;
			stk.push(x);
			break;
			case 2: stk.pop();
			break;
			case 3: stk.display();
			break;
			default: exit(0);
			break;
		}
	}
}
