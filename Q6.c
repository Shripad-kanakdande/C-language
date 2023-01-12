#include<stdio.h>
int main()
{
	int len,wid;
	int area,perimeter;
	
	printf("Enter the lengthe and width of traingle");
	
	scanf("%d%d",&len,&wid);
	
	area = len*wid;
	
	perimeter = 2*(len+wid);
	
	printf("The perimeter of the triangle is %d \n area of triangle is %d",perimeter,area);
	
	return 0;	
}
