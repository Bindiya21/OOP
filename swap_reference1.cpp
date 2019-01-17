#include<iostream>
using namespace std;
void swap(int *c,int *d)
{
        int temp;
        temp=*c;
        *c=*d;
        *d=temp;
        cout<<"A:"<<*c<<endl;
        cout<<"B:"<<*d<<endl;
}
int main()
{
        int c,d;
        cout<<"Enter 2 numbers:";
        cin>>c>>d;
        swap(&c,&d);
}

