#include<stdio.h>

void rectangle(int l, int w, int *a, int *b)
{
	*a = l * w;
	*b = 2* (l+w);
}

int main()
{
	int len,wid;
	int area,peri;
	puts("Enter len and wid of rectangle");
	scanf("%d %d",&len,&wid);
	rectangle(len,wid,&area,&peri);
	printf("\nArea = %d \nperi = %d",area,peri);
}
