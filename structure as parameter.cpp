#include <iostream>
using namespace std;
    
struct Rectangle {
	int length;
	int beadth;
};
//  pass by value
int area (struct Rectangle r1)
{
	r1.length = 3;
	return r1.length* r1.beadth;
}

int main()
{
	struct Rectangle r = {10, 5};
	cout<<"area is "<<area(r);
	cout<<endl;
//	change length in formal parameter will not modify in actual parameter
	cout<<"length "<<r.length;
	
}
