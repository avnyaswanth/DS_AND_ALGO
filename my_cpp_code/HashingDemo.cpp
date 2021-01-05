#include<iostream>
using namespace std;
#define SIZE 5
struct Data
{
	int key,value;
};
Data *hashTable[SIZE];
Data *dummy,*item;
int hashCode(int key)
{
	return(key%SIZE);
}
void insert(int key,int value)
{
	Data *item = new Data;
	item->key = key;
	item->value = value;
	int hashIndex = hashCode(key);
	while(hashTable[hashIndex!=NULL]&&hashTable[hashIndex]->key!=-1)
	{
		hashIndex++;
		hashIndex %= SIZE;
	}
	hashTable[hashIndex] = item;
}
Data *search(int key)
{
	int hashIndex = hashCode(key);
	while(hashTable[hashIndex]!=NULL)
	{
		if(hashTable[hashIndex]->key==key)
		return hashTable[hashIndex];
		hashIndex++;
		hashIndex %= SIZE;
	}
	return NULL;
}
Data *dele(Data *item)
{
	int key = item->key;
	int hashIndex = hashCode(key);
	while(hashTable[hashIndex]!=NULL)
	{
		if(hashTable[hashIndex]->key == key)
		{
			Data *temp = hashTable[hashIndex];
			hashTable[hashIndex] = dummy;
			return temp;
		}
		hashIndex++;
		hashIndex %= SIZE;
	}
	return NULL;
}
void display()
{
	for(int i=0;i<SIZE;i++)
	{
		if(hashTable[i]!=NULL)
		cout<<hashTable[i]->key<<ends<<hashTable[i]->value<<endl;
		else
		cout<<"NULL";
	}
}
int main(void)
{
	dummy = new Data;
	dummy->key = dummy->value = -1;
	insert(20,1);
	insert(21,2);
	insert(22,3);
	insert(23,4);
	insert(24,5);
	insert(26,6);
	display();
}
