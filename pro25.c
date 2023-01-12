#include<stdio.h>
int main()
{
	int x = 10;
	int *p;
	int **q;
	int ***r;
	p=&x;
	q=&p;
	r=&q;
	printf("\n&x = %d",&x);
	printf("\n&p = %d",&p);
	printf("\n&r = %d",&r);
	
	return 0;
}
