#include<stdio.h>
int main()
{
	int num;
	puts("Enter a number");
	scanf("%d",&num);
	if (num%5==0)
	{
		puts("Corect input");
	}
	else
	{
		puts("Wrong input");
	}
	return 0;
}
