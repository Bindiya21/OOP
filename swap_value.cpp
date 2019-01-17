#include<iostream>
using namespace std;
void swap(int a,int b)
{

	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;

}
int main()
{
	int x,y;
	cout<<"Enter 2 numbers;"<<endl;
	cin>>x>>y;
	swap(x,y);
	
}

