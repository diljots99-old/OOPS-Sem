/*
*Basic Input Output
*/
#include "iostream"

using namespace std;

int main()
{
    int num;
    cout<<"PRIME OR NOT USING IF STATEMENT\n";
    cout<<"\nEnter Numeric Value :";
    cin>> num;
    if((num==2)||(num==3)||(num==5)||(num==7))
    {
        cout<<num<<" is prime number \n";
    }
    else if((num%2==0)||(num%3==0)||(num%5==0)||(num%7==0))
    {
        cout<<num<<" is Not prime number \n";
    }
    else
    {
        cout<<num<<" is prime number \n";
    }
    system("pause");//To stop the console from disappering
    return 0;
}
