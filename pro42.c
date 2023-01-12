#include<stdio.h>
#include<stdlib.h>

int *create(int *ptr)
{
	ptr = (int*)malloc(20);
	return ptr;
}

void scandata(int *q)
{
	int i;
	for (i=0;i<=4;i++)
	{
		puts("Enter a number");
		scanf("%d",q+i);
	}
}

void printdata(int *r)
{
	int i;
	for(i=0;i<=4;i++)
	{
		printf(" %d",*(r+i));
	}
}

int main()
{
	int *p;
	p = create(p);
	scandata(p);
	printdata(p);
	return 0;
}
