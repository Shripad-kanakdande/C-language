#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *p,sum;
	int n,i;
	puts("Enter value of n");
	scanf("%d",&n);
	p = (float *)malloc (sizeof(int)*n);
	for (i=0;i<=n-1;i++)
	{
		puts("Enter a number");
		scanf("%f",p+i);
	}
	for (i=0;i<=n-1;i++)
	{
		sum = sum + *(p+i);
	}
	printf("sum = %f",sum);
	return 0;
}
