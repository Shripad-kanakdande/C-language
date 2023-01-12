#include <iostream>
using namespace std;
int addition(int n,int K);

int main()
{
	int T,N,K,i;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>N>>K;
		if(N==1 && K==1)
		{
			cout<<"YES\n";
		}
		if(N>addition(N,K) && N!=1)
		{
			cout<<"YES\n";
		}
		else if(N<addition(N,K))
		{
			cout<<"NO";
		}
	}
}

int addition(int n,int K)
{
	int sum = 0;
	while(K!=0)
	{
		sum = sum + K;
		K--;
	}
	return sum;
}
