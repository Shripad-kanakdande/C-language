#include<stdio.h>

int main()
{
	int arr[5] = {1,5,9,41,3};
	int num[4];
	int i;
	for(i=0;i<5;i++)
	{
		if(i>=3)
		{
			num[i] = arr[i+1];
		}
		if(i<3)
		{
			num[i] = arr[i];
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d ",num[i]);
	}
}
