#include<stdio.h>
int main()
{
	while (1)
	{
	
		int i,num1,num2,choice,a;
		puts("Enter two numbers");
		scanf("%d%d",&num1,&num2);
		printf("\nEnter which operation you want to perform");
		printf("\nPress 1 = add \n2 = subtraction \n3 = multiplication \n4 = division\n");
		scanf("%d",&choice);
	
		switch (choice)
		{
			case 1 : printf("Addition is %d",num1+num2);
						break;
			case 2 : printf("Subtraction is %d",num1-num2);
						break;
			case 3 : printf("multiplication is %d",num1*num2);
						break;
			case 4 : printf("Division is %d",num1/num2);
						break;
			default : printf("Wrong input");
		}
		printf("\nDo u want to continue?\n");
		printf("\nEnter 1 to continue");
		scanf("%d",&a);
		if(a!=1)
		{
			break;
		}
	}
	return 0;
}
