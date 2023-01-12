#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a four digit number");
	
	scanf("%d",&num);
	
	num%4==0 ? printf("The number is divisible by 4") : printf("The number is not divisible by 4");
	
	return 0;
}
