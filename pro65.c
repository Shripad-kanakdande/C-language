#include<stdio.h>

int main()
{
	int arr[5] = {1,5,7,9,6};
	int num[6];
	int i,j;
	for(i=0;i<6;i++)
	{
		if(i == 1)
		{
			num[i] = 3;
		}
		if(i<1)
		{
			num[i] = arr[i];
		}
		if(i>1)
		{
			num[i] = arr[i-1];
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",num[i]);
	}
}
