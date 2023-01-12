#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int top;
	unsigned capacity;
	struct Stack* arr;
};

struct Stack* createstack(unsigned capacity)
{
	struct Stack* stack;
	stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	int* arr;
	arr = (struct Stack*)malloc(stack->capacity*sizeof(int));
	return stack;
}

void display()
{
	
}

int main()
{
	struct Stack node;
	int top;
}
