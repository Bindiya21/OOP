#include<iostream>
using namespace std;
int simple_interest(int principle,float rate=0,int time=0)
{
	float s;
	s=principle*(rate/100)*time;
	cout<<"Amount:"<<s;
}

int main()
{
	int principle,time;
	float rate;
	cout<<"Enter amount,time period(in years),interest rate(in percent)";
	cin>>principle>>time>>rate;
	simple_interest(principle,rate,time);
	return 0;
}
