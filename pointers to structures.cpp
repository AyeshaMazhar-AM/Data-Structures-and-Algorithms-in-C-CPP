#include <iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};
int main()
{
//	Rectangle r={10, 15};
//	cout<<r.length<<endl;
//	cout<<r.breadth<<endl;
	
//	in c
//	Rectangle *p;
//	p= (struct Rectangle *)malloc(sizeof(struct Rectangle));
//	p->length= 15;
//	p->breadth= 24;
	
//	in c++
    Rectangle *p;
    p = new Rectangle;
    p->length= 15;
    p->breadth = 34;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
	
	return 0;
}
