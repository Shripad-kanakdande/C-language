#include<stdio.h>
int main()
{
	int base,height,area;
	
	printf("Enter the value of base and height");
	scanf("%d%d",&base,&height);
	
	area = base*height;
	
	printf("Area of triangle is %d",area);
	
	return 0;
}
