#include<iostream>

using namespace std;
class arithmetic
{
	int a;
	int b;
	float result;
	public:
	int addition(int i,int j);
	int sub(int i,int j);
	int mul(int i,int j);
	float div(int i,int j);
};  

inline int arithmetic::addition(int i,int j)
{
	a=i;
	b=j;
	result =a+b;
	cout<<result<<endl;

}

inline int arithmetic::sub(int i,int j)
{
	  a=i;
        b=j;
	result =a-b;
	cout<<result<<endl;

}

inline int arithmetic::mul(int i,int j)
{
	  a=i;
        b=j;
	result= a*b;
	cout<<result<<endl;

}

inline float arithmetic::div(int i,int j)
{
	  a=i;
        b=j;
	result= a/b;
	cout<<result<<endl;
}

int main()
{
	arithmetic a;
	a.addition(5,10);
	a.sub(5,10);
	a.mul(5,10);
	a.div(5,10);
	return 0;
}


