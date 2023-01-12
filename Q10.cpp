#include<iostream>
using namespace std;
/*
10.Scan radius from user.Define only one function circle() to find area and circumference.Print both results in main().
(use pass by address)
*/

float circle(int * r,float *c)
{
	*c = 2*3.14 * *r;
	return 3.14 * *r * *r;
}

int main()
{
	int r;
	float circum,area;
	cout<<"Enter radius\n";
	cin>>r;
	area = circle(&r,&circum);
	cout<<"area = "<<area<<"\ncircumferance = "<<circum;
	return 0;
}

