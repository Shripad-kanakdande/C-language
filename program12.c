#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	int max;
	max = a>b ? a : b;
	max = max>c ? max : c;
	
	printf("The maximunm number among all the three numbers is %d",max);
	
	return 0;
}
