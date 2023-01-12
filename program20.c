

//Program to find LCM of given two numbers

#include<stdio.h>
int main()
{
	int i,num1,num2,max;
	puts("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	max=num1>num2?num1:num2;
	for(i=max;i<=num1*num2;i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			printf("LCM = %d",i);
			break;
		}
	}
	return 0;
}
