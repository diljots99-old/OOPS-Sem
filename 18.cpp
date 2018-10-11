/*
*Largest of the two no.s using functions
*/
#include "iostream"

using namespace std;

int Largest(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int num1,num2;
    cout<<"LARGEST NUMBER USING FUNCTION\nEnter The Number (two numbers Seprated by space ) :- ";
    cin>>num1>>num2;
    cout<<"The Largest number is "<<Largest(num1,num2)<<endl;
    system("pause");
    return 0;
}