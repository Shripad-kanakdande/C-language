#include<stdio.h>
int main()
{
	char gen;
	int age;
	puts("Enter your gen");
	scanf("%c",&gen);
	
	puts("Enter your age");
	scanf("%d");
	
	switch(gen);
	{case'm' : 
		case'M' : if(age>21);
		           {
		           		puts("Able to marry");
				   }
					else
				   {
				   		puts("Unable to marry");
				   }
				   break;
		case 'f' :
		case 'F' : if(age>18);
		           {
		           		puts("Able to marry");
				   }
				   else
				   {
				   		puts("Unable to marry");
				   }
				   break;
		default : puts("Wrong input");
	}
	return 0;
}
