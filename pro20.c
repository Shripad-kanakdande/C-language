#include<stdio.h>
int main()
{
	int i,sum;
	sum=0;
	int n;
	puts("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf(sum);
	return 0;
}
