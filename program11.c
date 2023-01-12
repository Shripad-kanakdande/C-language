#include<stdio.h>
int main()
{
	int num1,num2;
	int ans;
	printf("Enter two numbers ");
	scanf("%d %d",&num1,&num2);
	
	ans = num1>num2 ? printf("%d>%d",num1,num2) : printf("%d<%d",num1,num2);
	return 0;
}
