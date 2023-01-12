#include<stdio.h>
//insertion sort
int main()
{
	int num[5] = {9,1,4,7,15};
	int i,j;
	int temp;
	for(i=0;i<5;i++)
	{
		temp = num[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp < num[j])
			{
				num[j+1] = num[j];
			}
			else
			{
				break;
			}
		}
		num[j+1] = temp;
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
}
