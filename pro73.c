#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 3,b = 0;
	int *p;
	p = &a;
	int *q;
	q = &b;
	p = q;
	printf("%d",*p);
}
