#include<iostream>
using namespace std;
int p(int);
int p(int,int);
int p(int,int,int);


int p(int i)
{
	return 2*3.14*i;
}

int p(int i,int j)
{
	return 2*(i+j);
}

int p(int i,int j,int k)
{
	return i+j+k;
}

int main()
{
	
	cout<<"Circle:"<<p(5)<<"\n";
	cout<<"Rectangle:"<<p(2,5)<<"\n";
	cout<<"Triangle"<<p(1,2,3)<<"\n";
	return 0;
}
