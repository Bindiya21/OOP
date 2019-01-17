#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array:"<<"\n";
	cin>>n;
	int a[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"double of odd place elements:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"-"<<a[i]*2<<"\n";
		i++;
	}
}
