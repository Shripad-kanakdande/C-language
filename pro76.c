#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;
}Node;

void show(Node * p)
{
	while(p != NULL)
	{
		printf("%d\n",p->data);
		p = p->next;
	}
}

Node * createNode(int x)
{
	Node * p;
	p = (Node *)malloc(sizeof(Node));
	p->data = x;
	p->next = NULL;
	return p;
}

int main()
{
	Node T1;
	Node *head;
	Node * p;
	head = createNode(10);
	head->next = NULL;
	p = createNode(20);
	head ->next = p;
	p->next = NULL;
	show(head);
	
}
