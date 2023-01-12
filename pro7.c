#include<stdio.h>
int main()
{
	int x;
	
	printf("Enter a value ");
	scanf("%d",&x);
	
	x%3==0 && x%5==0 ? printf("correct") : printf("wrong");
	
	
	return 0;
}
