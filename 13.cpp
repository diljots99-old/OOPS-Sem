/*
*Factorial of the given no
*/
#include "iostream"

using namespace std;

int main()
{
    unsigned long long int n,number,fact=1;
    cout<<"FACTORIAL OF THE GIVEN NUMBER";
    cout<<"\nEnter a number :- ";
    cin>>number;
    n=number;
    while (n !=0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"The Factorial of "<<number<<" is "<<fact<<endl;
    system("pause");
    return 0;
}