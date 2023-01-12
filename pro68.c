#include<stdio.h>
int main()
{
	int num[5];
	int i,j;
	i = 0;
	j = 4;
	int key;
	int mid = (i+j)/2;
	while(i>=j)
	{
		if(key == mid)
		{
			printf("element at %d",i);
		}
		else if(key < mid)
		{
			j = mid + 1;
		}
		else if(key > mid)
		{
			i = mid + 1;
		}
		else
		{
			printf("NOT FOUND!");
		}
	}
}
