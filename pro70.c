#include<stdio.h>
//bubble sort
int main()
{
	int num[5] = {9,2,5,4,7};
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(num[j] > num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
}
