#include<stdio.h>
int main()
{
	volatile char ch,ans;
	scanf("%c",&ch);
	
	ch++; 
	
	printf("%c",ch);
	
	return 0;
}
