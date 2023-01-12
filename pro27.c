#include<stdio.h>
int main()
{
	int x;
	x = 0;
	int * p;
	int **q;
	int***r;
	p = &x;
	q = &p;
	r = &q;
	printf("\nx = %d",x);
	printf("\nx = %u",p);
	printf("\nx = %u",q);
	printf("\nx = %u",r);
	
	printf("\nx = %d",*p);
	printf("\nx = %u",*q);
	printf("\nx = %d",**q);
	printf("\nx = %u",***r);
	
	printf("\nx = %d",*r);
	printf("\nx = %d",**r);
	
	return 0;
}
