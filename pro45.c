#include<stdio.h>
int main()
{
	int x=0;
	myfun3(x);
	myfun4(x);
}
void myfun3(int x)
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for (k=1;k<=i-1;k++)
		{
			printf("*");
		}
		for (j=i;j<=4;j++)
		{
			printf("-");
		}
		printf("\n");
	}
}
void myfun4(int x)
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for (k=i;k<=4;k++)
		{
			printf("*");
		}
		for (j=1;j<=i-1;j++ )
		{
			printf("-");
		}
		printf("\n");
	}
}

