#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[1000];
    gets(str);
    int i,j,k;
    for(j=0;j<strlen(str);j++)
    {
    	if(str[j] == ' ')
    	{
    		printf("\n");
    		continue;
		}
    	printf("%c",str[j]);
	}
	
//    for(i=0;i<strlen(str);i++)
//    {
//           for(k=0;k<strlen(str);k++)
//           {
//           	printf("%c",str[k]);
//		}
//        
//    }
    
    return 0;
}   
