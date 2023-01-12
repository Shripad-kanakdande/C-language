#include<stdio.h>

void circle(int r, float *a, float *p)
{
	*a = 3.14 * r * r;
	*p = 3.14 * 2 * r;
}

int main()
{
	int rad;
	float area,peri;
	puts("Enter radius");
	scanf("%d",&rad);
	circle(rad,&area,&peri);
	printf("area = %f \nperimeter = %f",area,peri);
	return 0;
}
