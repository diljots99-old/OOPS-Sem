/*
*Largest Using Nested if  else
*/
#include "iostream"
using namespace std;

int main()
{    
    float n1,n2,n3;
    cout<<"LARGEST AMONG THREE (NESTED IF ELSE) \nEnter three numbers: ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
    {
        cout<<"Largest number: "<<n1<<endl;
    }
    else if(n2>=n1 && n2>=n3)
    {
        cout<<"Largest number: "<<n2<<endl;
    }
    else
    {
        cout<<"Largest number: "<<n3<<endl;
    }
    system("pause");
    return 0;
}