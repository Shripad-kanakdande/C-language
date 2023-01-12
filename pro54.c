#include <stdio.h>

int main(void) 
{
	int T,X;
	scanf("%d",&T);
	scanf("%d",&X);
	if(T>=1 && T<=10)
	{
	    for(T=1;T<=10;T++)
	    {
	        if(X>=94 && X<=103)
	    	{
	       		if(X>98)
	        	{
	    	    	printf("YES");
	        	}
	        	else
	      	    {
	         	   printf("NO");
				}
	        }
	    }
	    else
	    {
	        printf("NO");
	    }
	}
	return 0;
}
