#include <iostream>
using namespace std;

//    passing array as parameters in function
void fun(int *A , int n)
{
//	we can change value of array inside function
	A[0] = 15;
	for (int i=0; i<n; i++)
	cout<<A[i] << endl;
}

int main()
{
	int A[] = {4, 6, 7, 9, 3};
	int n = 5;
	
//	function calling
	fun(A, n);
	
}
