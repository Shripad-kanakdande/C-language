#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i,n;
	puts("Enter the value of n");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*(n-1));
	for (i=0;i<=n-1;i++)
	{
		puts("Enter a number");
		scanf("%d",p+i);
	}
	int c;
	for (i=0;i<=n-1;i++)
	{
		if (*(p+i) == 5)
		{
			c++;
		}
	}
	printf("no. of times 5 appeared = %d",c);
	return 0;
}
