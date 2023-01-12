#include<stdio.h>

int main()
{
	int num[5] = {5,4,2,8,1};
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
}
