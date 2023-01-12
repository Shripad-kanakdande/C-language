#include<stdio.h>
int main()
{
	int num;
	float fr;
	char ch;
	
	printf("Enter a character");
	scanf("%c",&ch);
	
	printf("Enter a number");
	scanf("%d",&num);
	
	printf("Enter a fraction");
	scanf("%f",&fr);
	
	printf("the character is %c \nthe number is %d \nthe fraction is %f",ch,num,fr);
	
	return 0;
}
