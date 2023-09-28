#include <iostream>
using namespace std;

//call by reference

void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"swap value "<<endl;
	cout<<"x : "<<x<<endl;
	cout<<"y : "<<y<<endl;
}

int main()
{
	int a,b;
	a=10;
	b=20;
	swap(a,b);
	cout<<"actual value will be modify"<<endl;
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
	return 0;
}
