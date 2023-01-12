#include<stdio.h>

int main()
{
	int num[5] = {8,5,6,49,1};
	int start,end,mid,key;
	start = 0;
	end = 4;
	key = 49;
	int i,j;
	while(1)
	{
		mid = (start+end)/2;
		if(start > end)
		{
			break;
		}
		if(key == num[mid])
		{
			printf("Found at %d",mid);
			return 0;
		}
		if(key < num[mid])
		{
			end = mid-1;
		}
		if(key > num[mid])
		{
			start = mid+1;
		}
	}
	printf("NOT FOUND");
		
	
	return 0;
}
