#include<iostream>
using namespace std;
class Queue
{
	int capacity,*queue;
	int front=-1,rear = -1;
	public:
	Queue(int cap)
	{
		capacity = cap;
		queue = new int[capacity];
	}
	int is_empty()
	{
	  	return(front==-1);
	}
	int is_full()
	{
		return((rear+1)%capacity==front);
	}
	void Enqueue(int ele)
	{
		if(is_full())
		cout<<"Queue Overflow"<<endl;
		else
		{
			if(front==-1)
			front++;
			rear = (rear+1)%capacity;
			queue[rear] = ele;
		}
	}
	void Dequeue()
	{
		if(is_empty())
		cout<<"Queue Underflow"<<endl;
		else
		{
			cout<<queue[front]<<endl;
			if(front==rear)
			front=rear=-1;
			else
			front = (front+1)%capacity;
		}
	}
	void display()
	{
		if(front==-1)
			cout<<"Queue is Empty"<<endl;
			else
			{
				for(int i=front;i<=rear;i++)
				cout<<queue[i]<<ends;
				cout<<endl;
			}
	}
};
int main()
{
	int cap;
	cout<<"Enter queue capacity";
	cin>>cap;
	Queue que(cap);
	int n;
	while(1)
	{
		cout<<"Enter\n1.To Enqueue\n2.To Dequeue\n3.To display";
		cin>>n;
		switch(n)
		{
			case 1: int x;
			cout<<"Enter the element to push";
			cin>>x;
			que.Enqueue(x);
			break;
			case 2: que.Dequeue();
			break;
			case 3: que.display();
			break;
			default: exit(0);
			break;
		}
	}
}
