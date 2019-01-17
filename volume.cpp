#include<iostream>
using namespace std;
int volume()
{
	int len,breadth,height;
	cout<<"Enter dimensions";
	cin>>len>>breadth>>height;
	if(len==breadth && breadth==height)
		cout<<len*len*len<<endl;
	else 
		cout<<len*breadth*height<<endl;
}
int main()
{
	volume();
}
