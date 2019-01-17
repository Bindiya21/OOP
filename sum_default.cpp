#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int a=0)
{
	return x+y+z+a;
}

int main()
{
	cout<<sum(1,2)<<"\n";
	cout<<sum(1,2,3)<<"\n";
	cout<<sum(1,2,3,4)<<"\n";
}
