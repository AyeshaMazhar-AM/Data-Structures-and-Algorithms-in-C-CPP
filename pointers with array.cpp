
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    // for allocating memory
    
    // method in c
    // int *p;
    // p = (int *)malloc(5*sizeof(int));
    
    // method in c++
    int *p;
    p= new int[5];
    p[0] = 12;
    p[1] = 13;
    p[3] = 40;
    p[2] = 6;
    for(int i=0; i<5; i++)
    cout<<&p[i]<<endl;
    
    // for deallocating memory
    // in c we use : 
    //free (p);
    
    // in c++
    delete[] p;
    

    return 0;
}

