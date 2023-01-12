#include<stdio.h>
int main()
{
	volatile int x = 5;
	int y;
	
	y = ++x + x++ + ++x;
	
	printf("%d\n%d",x,y);
	
	return 0;
}
