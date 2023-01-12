#include<stdio.h>
int main()
{
	int i,j,a;
	int num[5] = {4,9,2,11,15};
	for(i=1;i<5;i++)
	{
		int temp = num[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp < num[j])
			{
				a = num[i];
				num[i] = num[j];
				num[j] = a; 
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}
