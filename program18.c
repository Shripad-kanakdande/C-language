#include<stdio.h>
int main()
{
	char gen;
	int age;
	puts("Enter your gender ");
	scanf("%ch",&gen);
	puts("Enter your age");
	scanf("%d",&age);
	switch(gen)
	{
		case 'm': 
		case 'M': if (age>21)
		          {
		          	puts("able to marry");
				  }
				  else
				  {
				  	puts("able to marry");
				  }  
		break;
	
		case 'f':
		case 'F': if (age>18)
		          {
		          	puts("able to marry");
				  }
				  else
				  {
				  	puts("able to marry");
				  }  
		break; 
		
		default: printf("Wrong input");
	}
	printf("\nout of switch");
	return 0;
}
