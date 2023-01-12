#include<stdio.h>
int main()
{
	int a,b,c,d,num;
	
	printf("Enter a three digit nuumber");
	scanf("%d",&num);
	
	a = num%10; // last digit
	b = num/10; // first digit
	c = b%10; 
	d = b/10; // second digit
	printf("\n%d\n%d\n%d",d,c,a);
	
	return 0;
}
