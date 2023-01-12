#include<stdio.h>
int main()
{
	volatile int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d\n%d",&num1,&num2);
	
	int add;
	add = num1 + num2;
	printf("%d + %d = %d",num1,num2,add);
	
	int sub;
	sub = num1 - num2;
	printf("%d - %d = %d",num1,num2,sub);
	
	return 0;
}
