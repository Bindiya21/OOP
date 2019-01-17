#include<iostream>
using namespace std;
int main()
{
	int *p;
	int n;
	cout<<"Enter size of an array:"<<"\n";
	cin>>n;
	int a[n];
	p=a;
	cout<<"Enter elements:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		p=&a[0];
		cout<<i+1<<"-"<<2*a[i]<<"\n";
		i++;
	}	
}
