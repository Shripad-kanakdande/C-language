#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	int X,Y,i;
	cin>>T;
	cin>>X;
	cin>>Y;
	for(i=0;i<T;i++)
	{
	    if(X>Y)
	    {
	        cout<<"NEW PHONE\n";
	    }
	    else if(X<Y)
	    {
	        cout<<"REPAIR\n";
	    }
	    else if(X==Y)
	    {
	        cout<<"ANY\n";
	    }
	}
	return 0;
}

