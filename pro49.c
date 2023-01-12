#include<stdio.h>
typedef struct Number
{
	int num[4];
}Number;
int main()
{
	Number obj[5];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			puts("Enter a num");
			scanf("%d",&obj[i].num[j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d",obj[i].num[j]);
		}
		printf("\n");
	}
	return 0;
}
