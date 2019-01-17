#include<iostream>
using namespace std;
int area(int length,int breadth)
{
	return length*breadth;
}

float area1(int r)
{
	return 3.14*r*r;
}

int main()
{
	int l,b,r;
	cout<<"Enter length breadth and radius:"<<"\n";
	cin>>l>>b>>r;
	cout<<area(l,b)<<"\n";
	cout<<area1(r)<<"\n";
	return 0;
}
