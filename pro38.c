#include<stdio.h>
#include<stdlib.h>
//functions returning value

int *myfun()
{
	int a = 10;
	int *ptr = &a;
	return ptr;
}

int main()
{
	int *p;
	p = myfun();
	printf("%d",*p);
}
