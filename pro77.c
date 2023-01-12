#include<stdio.h>
//using namespace std;

int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i;j>=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
