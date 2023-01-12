#include<stdio.h>
void getdata(int *p,int *q)
{
	puts("Enter two numbers");
	scanf("%d%d",p,q);
}
void addition(int *p, int *q, int*z)
{
	*z = *p + *q;
}
int main()
{
	int a,b,add;
	getdata(&a,&b);
	addition(&a,&b,&add);
	printf("add = %d",add);
	return 0;
}
