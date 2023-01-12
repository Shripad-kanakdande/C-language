#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    char str[][10] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
        if(1)
        {
            if(i<=9 && i>=1)
            {
                puts(&str[i-2][10]);
            }
        }
        if(i>9)
	    {
	        if(i%2==0)
	        {
	            printf("even\n");
	        }
	        else 
	        {
	            printf("odd\n");
	        }
	    }
    }
    
}

