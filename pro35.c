#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *p;
	p= (int *)malloc(sizeof(int)*5);
	for (i=0;i<=4;i++)
	{
		puts("Enter a number");
		scanf("%d",p+i);
	}
	int sum = 0;
	for (i=0;i<=4;i++)
	{
		sum = sum + *(p+i);
	}
	printf("%d",sum);
	return 0;
}
