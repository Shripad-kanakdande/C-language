#include<stdio.h>
#include<stdlib.h>
void scandata();
void printdata();
int *myfun()
{
	int *p;
	p = (int *)malloc(sizeof(int)*5);
	return p;
}
int main()
{
	int *ptr;
	ptr = myfun();
	scandata(ptr);
	printdata(ptr);
	free (ptr);
	return 0;
}
void scandata(int *p)
{
	int i;
	for (i=0;i<=4;i++)
	{
		puts("Enter a number");
		scanf("%d",p+i);
	}
}
void printdata(int*p)
{
	int i;
	for (i=0;i<=4;i++)
	{
		printf(" %d",*(p+i));
	}
}
