/*
*swap the values by passing value
*/
#include "iostream"

using namespace std;

void swapv(int x,int y)
{
    int z=x;
    x=y;
    y=z;
    cout<<"\nDuring\n";
    cout<<"The value of a = "<<x<<"\n";
    cout<<"The value of b = "<<y<<"\n";
}

int main()
{
    int a,b;
    cout<<"SWAP BY VALUE\n\n";
    cout<<"\nEnter Two Values = ";
    cin>>a>>b;
    cout<<"Before\n";
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    swapv(a,b);
    cout<<"\nAfter\n";
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
    //values of a & b will remain same before and after swap because
    //the the swap takes place in a duplicate memory not  in actual variable
    system("pause");
    return 0;
}
