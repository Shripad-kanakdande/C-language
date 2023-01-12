#include<stdio.h>
int main()
{
	int a;
	int * p;
	
	p = &a;
	
	puts("Enter a number");
	scanf("%d",p);
	
	printf("a = %d",a);
	
	return 0;
}
