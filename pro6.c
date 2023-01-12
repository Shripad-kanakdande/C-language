#include<stdio.h>
int main()
{
	
	volatile int x = 10;
	int y;
	
	printf("Enter a value");
	scanf("%d",&x);
	
	x<10 ? printf("Correct") : printf("False");
	
	return 0;
	
}
