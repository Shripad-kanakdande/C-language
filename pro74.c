#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};

int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	fourth->data = 4;
	fourth->next = NULL;
	
	struct Node* fifth;
	fifth = (struct Node*)malloc(sizeof(struct Node));
	
	//appending a node in singly linked list
	fifth->data = 5;
	fifth->next = NULL;
	
	fourth->next = fifth;
	
	//pop
	//fourth->next = NULL;
	free(fifth);

	//Display of the linked list
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
	
	return 0;
}
