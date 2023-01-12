#include<stdio.h>
void isdigit(char ch);
int main()
{
	char ch;
	puts("Enter a character");
	scanf("%c",&ch);
	isdigit(ch);
}

void isdigit(char ch)
{
	if(ch>='0' && ch<='9')
	{
		printf("it is a digit");
	}
	else 
	{
		printf("It is not a digit");
	}
}
