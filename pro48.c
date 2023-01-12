#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char city[8][20];
	for(i=0;i<8;i++)
	{
		puts("Enter city name");
		gets(&city[i][0]);
	}
	for (i=0;i<8;i++)
	{
		if(strcmp(&city[i][0],"pune")==0)
		{
			puts("present");
			break;
		}
	}
	if(i == 8)
	{
		puts("\n\nNot present");
	}
	return 0;
}
