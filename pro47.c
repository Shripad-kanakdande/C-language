#include<stdio.h>
#include<stdlib.h>
int sort(int *r);

int main()
{
	int *ptr[4];
	int i,a;
	int max,min;
	for (i=0;i<=3;i++)
	{
		ptr[i] =(int *)malloc(sizeof(int));
	}
	for (i=0;i<=3;i++)
	{
		puts("Enter a num");
		scanf("%d",(ptr+i));
	}
	for (i=0;i<=3;i++)
	{
		printf("%d ",*(ptr+i));
	}
	
	a = add(ptr);
	printf("\naddition = %d",a);
	
	max = findmax(ptr);
	printf("\nmax = %d",max);
	
	min = findmin(ptr);
	printf("\nmin = %d",min);
	
	sort(ptr);

	return 0;
}
int add(int *p)
{
	int sum=0,i;
	for (i=0;i<8;i++)
	{
		sum = sum + *(p+i);
	}
	return sum;
}
int findmax(int *p)
{
	int i;
	int max;
	max = *(p+0);
	for(i=0;i<4;i++)
	{
		if (max < *(p+i))
		{
			max = *(p+i);
		}
	}
	return max;
}
int findmin(int *q)
{
	int i;
	int min;
	min = *(q+0);
	for(i=0;i<4;i++)
	{
		if (min > *(q+i))
		{
			min = *(q+i);
		}
	}
	return min;

int sort(int *r)
{
	int i,j,temp;
	printf("\n");
	for (i=0;i<4;i++)
	{
		for (j=i+1;j<4;j++)
		{
			temp = *(r+i);
			*(r+i) = *(r+j);
			*(r+j) = temp;
			printf("%d ",temp);
		}
		
	}
	
}

