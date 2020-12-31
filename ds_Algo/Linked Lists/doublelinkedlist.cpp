#include<iostream>
using namespace std;
struct node *insert(struct node *);
void display(struct node*);
void reverse(struct node*);
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int main()
{
	struct node *head = NULL;
	int n;
	while(1)
	{
		cout<<"enter n value"<<endl;
		cout<<"enter 1 to insert"<<endl<<"enter 2 to exit"<<endl<<"enter 3 to display"<<endl;
		cout<<"enter 4 to reverse"<<endl;
		cin>>n;
		switch(n)
		{
			case 1: head = insert(head);
			break;
			case 2 :exit(0);
			break;
			case 3: display(head);
			break;
			case 4: reverse(head);
		}
	}
}
struct node *insert(struct node *head)
{
	struct node *temp = new struct node[1];
	int ele;
	cout<<"Enter data";
	cin>>ele;
	temp -> data = ele;
	temp ->left = NULL;
	temp ->right = NULL;
	if(head == NULL)
	{
		head = temp;
		return head;
	}
	struct node *cur = head;
	while(cur->right!=NULL)
	{
		cur = cur ->right;
	}
	cur -> right =temp;
	temp -> left =cur;
	return head;
}
void display(struct node *head)
{
	struct node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<ends;
		temp = temp->right;
	}
	cout<<endl;
}
void reverse(struct node *head)   //    Logic to reverse a double linked list;
{
	struct node *temp1 = head;
//	struct node *temp2;
	while(temp1->right!=NULL)
	{
		temp1 = temp1->right;
	}
	while(temp1!=NULL)
	{
		cout<<temp1->data<<endl;
		temp1 = temp1->left;
	}
	cout<<endl;
}
