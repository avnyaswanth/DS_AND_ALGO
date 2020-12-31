#include<iostream>
using namespace std;
struct node *insert_rear(struct node**);
struct node *insert_front(struct node**);
struct node *insert_middle(struct node**);
struct node *del_rear(struct node**);
struct node *del_front(struct node**);
struct node *del_middle(struct node**);
void display(struct node*);
struct node* create_node();
int count = 0;
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head = NULL;
	
	while(1)
	{
		cout<<"Enter 1.to insert at front"<<endl<<"2.to insert at rear "<<endl<<"3. insert at middle ";
	cout<<endl<<"4.to del at front"<<endl<<"5.to del at rear"<<endl<<"6.to del at middle"<<endl;
	cout<<"7.to print"<<endl<<"8.to exit"<<endl;
	int n;
	cin>>n;
	
		switch(n)
		{
			case 1: head = insert_front(&head);
			break;
			case 2: head = insert_rear(&head);
			break;
			case 3: head = insert_middle(&head);
			break;
			case 4: head = del_front(&head);
			break;
			case 5: head = del_rear(&head);
			break;
			case 6: head = del_middle(&head);
			break;
			case 7: display(head);
			break;
			case 9: exit(0);
			break;
		}
	}
}
struct node *create_node()
{
	struct node *temp = new struct node[1];
	cout<<"enter data";
	cin>>temp->data;
	temp->link = NULL;
	count++;
	return temp;
}
struct node *insert_front(struct node **head)
{
	struct node *temp = create_node();
	if(*head== NULL)
	*head = temp;
	else
	{
		temp->link = *head;
		*head = temp;
	}
	return (*head);
}
struct node *insert_rear(struct node **head)
{
	struct node *temp = create_node();
	if(*head == NULL)
	*head = temp;
	else
	{
		struct node *cur = *head;
		while(cur->link)
		{
			cur = cur->link;
		}
		cur->link = temp;
	}
	return *head;
}
struct node *insert_middle(struct node **head)
{
	struct node *temp = create_node();
	if(*head == NULL)
	*head = temp;
	else 
	{
		int n;
		cout<<"enter the position of insert";
		cin>>n;
		struct node *cur = *head;
		for(int i=1;i<=n-2;i++)
		cur = cur->link;
		temp->link = cur->link;
		cur->link = temp;
	}
	return (*head);
}
struct node *del_front(struct node **head)
{
	struct node *temp = *head;
	if(*head == NULL)
	cout<<"No elements in List to Del"<<endl;
	else
	{
		*head = temp->link;
		cout<<temp->data<<" is deleted"<<endl;
		count--;
	}
	return (*head);
}
struct node *del_rear(struct node **head)
{
	struct node *temp = *head;
	if(*head == NULL)
	cout<<"No elements in List to Del"<<endl;
	else
	{
		struct node *cur = *head;
		struct node *cur_1;
		while(cur->link)
		{
			cur_1 = cur;
			cur = cur->link;
		}
		cur_1->link = NULL;
		cout<<cur->data<<" is deleted"<<endl;
		count--;
	}

	return(*head);
}
struct node *del_middle(struct node **head)  // if we want to delete only a node in a list with only one node by this method
                                             // a small change should be done in the code;
{
	struct node *temp = *head;
	if(*head == NULL)
	cout<<"No elements in List to Del"<<endl;
	else
	{
		int n;
		cout<<"Enter the position to del";
		cin>>n;
		if(n>count)
		{
			cout<<"Enter the position less than"<<count+1;
			del_middle(head);
		}
		else{
			
		struct node *cur = *head;
		struct node *cur_1 = *head;
		for(int i=1;i<n;i++)
		{
			cur_1 = cur;
			cur = cur->link;
		}
		cur_1->link = cur->link;
		cur ->link = NULL;
		cout<<cur->data<<" is deleted"<<endl;
	}
	}
	return(*head);
}
void display(struct node *head)
{
	if(head == NULL)
	cout<<"List is empty"<<endl;
	else
	{
		struct node *cur = head;
		while(cur)
		{
			cout<<cur->data<<ends;
			cur = cur->link;
		}
		cout<<endl;
	}
}
