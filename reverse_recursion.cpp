#include<iostream>
using namespace std;
int reverse(int num)
{
	int n;
	if(num)
	{
		n=num%10;
		cout<<n;
		reverse(num/10);
	}
	else
		return n;
}
int main()
{
	int num;
	cout<<"Enter number:"<<endl;
	cin>>num;
	reverse(num);
	cout<<endl;
}
