/*
*Sum of Digits using while
*/
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
    int n,t=1,sum=0,remainder=0;;
    cout<<"\t\tSUM OF DIGITS\n"<<"Enter a Number = ";
    cin>>n;
    t = n;
    while (t !=0)
    {
        remainder = t % 10;
        sum       = sum + remainder;
        t         = t / 10;
    }
    cout<<"Sum of digits of "<<n<<" = "<<sum<<"\n";
    system("pause");
    return 0;
}
