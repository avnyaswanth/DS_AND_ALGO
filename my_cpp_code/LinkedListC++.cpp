
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
class LinkedList
{
	private:
		node *head;
		public: 
		LinkedList()
		{
			head = NULL;
		}
		void add_at_end(int ele)
		{
			node *temp = new node;
			temp->data = ele;
			temp->link = NULL;
			if(head==NULL)
			head = temp;
			else
			{
				node *cur = head;
				while(cur->link!=NULL)
				cur = cur->link;
				cur->link = temp;
			}
		}
		void traverse()
		{
			node *temp = head;
			while(temp!=NULL)
			{
				cout<<temp->data<<ends;
				temp = temp->link;
			}
			cout<<endl;
		}
		node* get_head()
		{
			return head;
		}
		int length(node *h)
		{
			int c = 0;
			while(h!=NULL)
			{
				h = h->link;
				c++;
			}
			return c;
		}
		void alternate(node *n1,node *n2)   //   Merging of two lists(Not in sorted order)
		{
			node *n3=new node,*prev;
			head =  n3;
			while(n1!=NULL||n2!=NULL)
			{
				if(n1!=NULL&&n2!=NULL)
				{
					n3->data = n1->data;
					n1 = n1->link;
					n3->link = new node;
					prev = n3;
					n3 = n3->link;
					n3->data = n2->data;
					n2 = n2->link;
				}
				else
				{
					if(n1!=NULL)
					{
						n3->data = n1->data;
						n1 = n1 ->link;
					}
					else 
					{
						n3->data = n2->data;
						n2 = n2->link;
					}
				}
				n3->link = new node;
				prev = n3;
				n3 = n3->link;
			}
			prev->link = NULL;
		}
		void reverse(node *cur,node *prev,node *next)
		{
			if(cur->link==NULL)
			{
				cur->link = prev;
				return;
			}
			next = cur->link;
			cur->link = prev;
			prev = cur;
			head = next;
			reverse(head,prev,next);
		}
};
int main()
{
	LinkedList l1;
//	LinkedList l2;
//	LinkedList l3;
//	cout<<"Enter n";
//	int n;
//	cin>>n;
//	cout<<"Enter linked list elements";
	for(int i=1;i<=100;i++)
	{
//	int x;
//	cin>>x;
	l1.add_at_end(i);
//	l2.add_at_end(i*5);
	}
//	l3.alternate(l1.get_head(),l2.get_head());
//	l3.traverse();
	l1.traverse();
	l1.reverse(l1.get_head(),NULL,NULL);
	l1.traverse();
}
