#include<stdio.h>
int main()
{
	float num1,num2;
	
	printf("Enter two fraction values");
	scanf("%f%f",&num1,&num2);
	
	num1>num2 ? printf("%f is largest",num1) : printf("%f is smaller",num2);
	
	return 0;
	
}
