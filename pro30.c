#include<stdio.h>

void circle(int rad,float *p, float *q)
{
	*p = 3.14 * rad * rad;
	*q = 2 * 3.14 *rad;
}

int main()
{
	int r;
	puts("Enter radius");
	scanf("%d",&r);
	float ans,area,circum;
	circle(r,&area,&circum);
	printf("area = %f",area);
	printf("\ncircum = %f",circum);
}
