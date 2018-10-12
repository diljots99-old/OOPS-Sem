/*
*Factorial of a number using functions.
*/
#include "iostream"

using namespace std;

int Factorial(int n )
{
    if(n > 1)
        return n * Factorial(n - 1);
    else
        return 1;
}
int main()
{
    int a;
    cout<<"FACTORIAL USING RECURESIVE FUNCTIONS \n Enter a Number :- ";
    cin>>a;
    cout<<Factorial(a)<<endl;
    system("pause");
    return 0;
}