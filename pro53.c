#include<stdio.h>

#include<stdlib.h>
int main()
{
	int * num[5];
	int a,b,c;
	puts("Enter three integers numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	num[1]=&a;
	num[2]=&b;
	num[3]=&c;
	int i;
	for(i=0;i<3;i++)
	{
		if(res == 0)
		{
			printf("found");
			break;
		}
	}
	if(i==3)
	{
		printf("Not found");
	}
	
	return 0;
}
