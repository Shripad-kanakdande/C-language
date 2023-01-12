#include<stdio.h>
#include<stdlib.h>

void myfun()
{
	int*p;
	int i;
	p =(int *)malloc(sizeof(int)*5);
	for (i=0;i<=5;i++)
	{
		puts("Enter a number");
		scanf("%d",p+i);
	}
	for (i=0;i<=5;i++)
	{
		printf(" %d",*(p+i));
	}
	
	free (p); //frees the memory
}

int main()
{
	myfun();
	return 0;
}
