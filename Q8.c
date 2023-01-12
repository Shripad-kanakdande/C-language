#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number");
	scanf("%d",&num);
	
	num%3==0 && num%5==0 ? printf("correct input") : printf("Wrong input");
	
	return 0;
}
