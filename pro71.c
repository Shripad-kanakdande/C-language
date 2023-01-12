#include<stdio.h>
#include<string.h>
struct Student
{
	char name[20];
	int age;
}str;

int main()
{
	struct Student S[2];
	int i;
	for(i=0;i<2;i++)
	{
//		gets(S[i].name);
		scanf
		scanf("%d",&S[i].age);
		printf("%d\n",i);
		
	}
	for(i=0;i<2;i++)
	{
		printf("name = ");
		puts(S[i].name);
		printf("i = %d\n",i);
		printf("age = %d",S[i].age);
	}
	return 0;
}
