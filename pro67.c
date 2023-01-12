#include<stdio.h>

int main()
{
	int i;
	int num[6] = {1,5,7,9,3,1};
	int arr[2] = {2,4};
	int arr1[8];
	for(i=0;i<6;i++)
	{
		arr1[i] = num[i];
	}
	int j=0;
	for(i=6;i<8;i++)
	{
		arr1[i] = arr[j];
		j++;
		if(j==2)
		{
			break;
		}
	}
	for(i=0;i<8;i++)
	{
		printf("%d ",arr1[i]);
	}
}
