#include<stdio.h>
void upperlower(char ch);

int main()
{
	char ch;
	puts("Enter an alphabet");
	scanf("%c",&ch);
	upperlower(ch);
	return 0;
}

void upperlower(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		printf("Uppercase");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Lowercase");
	}
}
