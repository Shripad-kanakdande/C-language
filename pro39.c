#include<stdio.h>
#include<stdlib.h>

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
