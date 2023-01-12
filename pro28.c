#include<stdio.h>
int main()
{
	int a;
	int b;
	int * p;
	int * q;
	p = &a;
	q = &b;
	
	puts("Enter values of a and b");
	scanf("%d %d",p,q);
	int ans;
	ans = * p + * q ;
	printf("ans = %d",ans);
	return 0;
}
