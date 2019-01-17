#include<iostream>
using namespace std;
int reverse()
{
	int num,n=0,reverse=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	while(num!=0)
	{
	n=num%10;
	num=num/10;
	cout<<n;
	}
	
}
int main()
{
	reverse();
}
