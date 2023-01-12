#include<stdio.h>
int main()
{
	int length;
	int width;
	int perimeter;
	int area;
	
	printf("Enter the value for length of rectangle",length);
	scanf("%d",&length);
	
	printf("Enter the value for width of rectangle",width);
	scanf("%d",&width);
	
	area = length*width;
	printf("area of rectangle is %d",area);
	
	perimeter = 2*(length+width);
	printf("\nperimeter of rectangle is %d",perimeter);
	
	return 0;
}
