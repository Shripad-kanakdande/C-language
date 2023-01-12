#include<stdio.h>
int main()
{
	int base,height,area;
	puts("Enter the base and height of triangle");
	scanf("%d%d",&base,&height);
	area = base*height/2;
	printf("Area of the triangle is %d",area);
	return 0;
}
