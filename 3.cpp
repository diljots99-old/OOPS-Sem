/*
*Table Of Given number
*/
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
    int Max,n;
    cout<< "\t\tTABLE OF GIVEN NUMBER\n";
    cout<< "Enter Table & Max Limit = ";
    cin>>n>>Max;
    for (int i=0;i<=Max;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    getch();
    return 0;
}
