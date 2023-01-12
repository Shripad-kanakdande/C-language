#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	p = &a;
	q = &b;
	puts("Enter two numbers");
	scanf("%d%d",p,q);
	int mul;
	printf("mul = %d",*p * *q);
	
	return 0;	
}
