/*
*To find the no. is even or odd
*/
#include "iostream"

using namespace std;

int main()
{
    int number;
    cout<<"\t\t\tEVEN ODD"<<"\nEnter the value:- ";
    cin>>number;
    if((number%2)==0)
    {
        cout<<number<<" is Even\n";
    }
    else
    {
        cout<<number<<" is odd\n";
    }
    system("pause");
    return 0;
}