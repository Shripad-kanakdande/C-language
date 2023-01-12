#include<stdio.h>
int main()
{
	int i, count=0;
	int x[10];
	for (i=0;i<=9;i++)
	{
		puts("Enter integer");
		scanf("%d",&x[i]);
		if(x[i]==10)
		{
			count = count + 1;
		}
	}
	printf("no. of times 10 scanned = %d",count);

}

