/*
*Sum of Even and Odd no.s from 1 to 100.
*/
#include "iostream"

using namespace std;

int main()
{
    int esum=0,osum=0,n,selector;
    cout<<"SUM OF EVEN AND ODD NUMBER UPTO GIVEN NUMBER\n";
    cout<<"Enter 0 - odd or 1 - even:-";
    cin>>selector;
    cout<<"Enter the end Number :- ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if (i%2 ==0)
        {
            esum+=i;
        }
        else
        {
            osum+=i;
        }
    }
    if(selector==1)
        cout<<"\nSum of Even Numbers : - "<<esum<<endl; 
    if(selector==0)
        cout<<"Sum of odd Numbers : - "<<osum<<endl;
    system("pause");
    return 0;
}