

// program to find GCD of given twio numbers

#include<stdio.h>
int main()
{
	int i,num1,num2,min;
	puts("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	min = num1<num2 ? num1 : num2;
	for(i=min;i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			printf("GCD is %d",i);
			break;
		}
	}
	return 0;
}
