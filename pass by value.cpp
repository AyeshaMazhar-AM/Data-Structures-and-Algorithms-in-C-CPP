#include <iostream>
using namespace std;

//pass by value :actual parameters will not be modified if any changes done in formal parameters 

void swap(int x,int y)
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
//	a and b in actual parameter
    cout<<"actual values "<<endl;
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
	return 0;
}
