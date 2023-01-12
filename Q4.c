#include<stdio.h>
int main()
{
	int principal;
	float rate;
	int year;
	float si;
	
	printf("Enter the principal,rate and number of years");
	scanf("%d%f%d",&principal,&rate,&year);
	
	si = principal*rate*year/100;
	
	printf("\nyour simple interest is %f",si);
	
	return 0;
}
