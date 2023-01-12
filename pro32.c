#include<stdio.h>

int getint()
{
	int p;
	puts("Enter a number");
	scanf("%d",&p);
	return p;
}
void addition(int p, int q, int *r)
{
	*r = p + q;
}

int main()
{
	int a,b,add;
	a = getint();
	b = getint();
	addition(a,b,&add);
	printf("add = %d",add);
	return 0;
}
