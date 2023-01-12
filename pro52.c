#include<stdio.h>
int main()
{
	char * str[3];
	char s1[10],s2[10],s3[10];
	gets(s1);
	gets(s2);
	gets(s3);
	str[0]=s1;
	str[1]=s2;
	str[2]=s3;
	int i;
	for(i=0;i<3;i++)
	{
		int res = strcmp(str[i],"python");
		if(res == 0)
		{
			printf("found");
			break;
		}
	}
	if(i==3)
	{
		printf("not found");
	}
	return 0;
}
