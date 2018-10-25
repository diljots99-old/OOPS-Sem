/*
*swap the values by passing reference
*/
#include "iostream"

using namespace std;

void swapv(int* x,int* y)
{
    int z=*x;
    *x=*y;
    *y=z;
    cout<<"\nDuring\n";
    cout<<"The value of a = "<<x<<"\n";
    cout<<"The value of b = "<<y<<"\n";
}

int main()
{
    int a,b;
    cout<<"SWAP BY REFFRENCE\n\n";
    cout<<"\nEnter Two Values";
    cin>>a>>b;
    cout<<"Before\n";
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    swapv(&a,&b);
    cout<<"\nAfter\n";
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    system("pause");
    return 0;
}

