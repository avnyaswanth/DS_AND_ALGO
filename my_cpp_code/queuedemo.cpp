
// Circular Queue through using structures

#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int front,rear,*array,capacity;
};
struct Queue* queue_impl(int size)
{
	struct Queue *Q = (struct Queue*)malloc(sizeof(struct Queue));
	Q->front = Q->rear = -1;
	Q->capacity = size;
	Q->array = (int*)malloc(sizeof(int)*Q->capacity);
	if(!Q->array)
	return NULL;
	return Q;
}
int isfull(struct Queue *Q)
{
	return((Q->rear+1)%Q->capacity==Q->front);
}
int isempty(struct Queue *Q)
{
	return(Q->front==-1);
}
void Enqueue(int data,struct Queue *Q)
{
	if(isfull(Q))
	printf("Queue overflow\n");
	else
	{
		Q->rear = (Q->rear+1)%Q->capacity;
		Q->array[Q->rear] = data;
		if(Q->front==-1)
		Q->front = Q->rear;
	}
}
int Dequeue(struct Queue *Q)
{
	int data = 0;
	if(isempty(Q))
	//printf("Queue is empty\n");
	return 0;
	else
	{
		data = Q->array[Q->front];
		if(Q->front==Q->rear)
		Q->front=Q->rear=-1;
		else
		Q->front = (Q->front+1)%Q->capacity;
		
	}
	return data;
}
void display(struct Queue *Q)
{
	if(isempty(Q))
	printf("Queue is empty");
	else
	for(int i=Q->front;i<=Q->rear;i++)
	printf("%d\t",Q->array[i]);
}
int main()
{
	int data;
	int n;
	struct Queue * Q = queue_impl(4);
	while(1)
	{
		printf("Enter 1 to enqueue\nEnter 2 to Dequeue\nEnter 3 to display");
		scanf("%d",&n);
	 switch(n)
	 {
	 	case 1: printf("Enter data to enqueue");
	 	scanf("%d",&data);
	 	Enqueue(data,Q);
	 	break;
	 	case 2:
		 if(!isempty(Q))
		 printf("Dequeued elementd : %d",Dequeue(Q));
		 else 
		 printf("Queue is empty");
	 	break;
	 	case 3:display(Q);
	 	break;
	 	default:exit(0);
	 	break;
	 }
	}
}

