#include <iostream>
#include<cstdlib>
using namespace std;
/*
 1 1 1 1 1 1 1
 1 2 2 2 2 2 1
 1 2 3 3 3 2 1
 1 2 3 4 3 2 1
 1 2 3 3 3 2 1
 1 2 2 2 2 2 1
 1 1 1 1 1 1 1 
*/
int main()
{
	int i,j,k,l,m,n,o,z;
	scanf("%d",&z);
	for(i=z;i>=1;i--)
	{
		for(j=z;j>=i;j--)
		{
			printf("%d ",j);
		}
		for(k=i-1;k>=1;k--)
		{
			printf("%d ",i);
		}  
		for(k=1;k<=i-1;k++)
		{
			printf("%d ",i);
		}
		for(l=i+1;l<=z;l++)
		{
			printf("%d ",l);
        }	
		cout<<"\n";
	}
	for(i=2;i<=z;i++)
	{
		for(j=z;j>=i;j--)
		{
			printf("%d ",j);
		}
		for(k=i-1;k>=1;k--)
		{
			printf("%d ",i);
		}  
		for(k=1;k<=i-1;k++)
		{
			printf("%d ",i);
		}
		for(l=i+1;l<=z;l++)
		{
			printf("%d ",l);
        }	
		cout<<"\n";
	}
	
}
