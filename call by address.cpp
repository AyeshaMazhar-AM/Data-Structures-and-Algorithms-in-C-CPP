#include <iostream>
using namespace std;

//pass by address: actual parameters will pass address to formal parameters and formal parameters should be pointers
//any changes done inside function will be modified in actual parameters

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x= *y;
	*y=temp;
	cout<<"swap value "<<endl;
	cout<<"x : "<<*x<<endl;
	cout<<"y : "<<*y<<endl;
}

int main()
{
	int a,b;
	a=10;
	b=20;
	swap(&a,&b);
	cout<<"actual parameter"<<endl;
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
	return 0;
}
