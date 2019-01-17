#include<iostream>
using namespace std;
class circle
{
	int radius;
	public:
	int area(int r)
	{
		r=radius;
		return 3.14*r*r;
	}
};

int main()
{
	int n,r;
	cout<<"Enter the no. of objects pf array:"<<"\n";
	cin>>n;
	int circle c[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter radius:"<<"\n";
		cin>>r;
		cin>>c[i].area(r);
	}
}
