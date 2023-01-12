#include<stdio.h>
int main()
{
	int i,a;
	puts("Enter a number");
	scanf("%d",&a);
	for (i=2;i<=a-1;i++)
	{
		if(a%i == 0)
		{
			printf("not a prime number");
			break;
		}
		else
		{
			printf("Prime number");
			break;
		}
	}
	
	return 0;
}
