#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left = NULL;
	node *right = NULL;
};
class bst
{
	public:
		bst(){ }
	node* insert(int,node*);
	void inorder(node *);
};
node* bst::insert(int num,node *root)
{
	if(root==NULL)
	return(new node(num));
	if(num>root->data)
	{
		root = insert(num,root->right);
	}
	if(num<root->data)
	{
		root = insert(num,root->left);
	}
}
void bst::inorder(node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<ends;
	inorder(root->right);
}
int main()
{
	bst b;
	node *root = b.insert(3,root);
	b.insert(4,root);
	b.insert(2,root);
	b.insert(5,root);
	b.insert(1,root);
	b.inorder(root);
}

