/*
*Convert Decimal To Binary
*/
#include "iostream"

using namespace std;  

int main()  
{  
    int a[128], n, i,j;    
    cout<<"\nEnter the number to convert: ";    
    cin>>n;    
    for(i=0; n>0; i++)    
    {    
        a[i]=n%2;    
        n= n/2;  
    }
    int b[i]; 
    cout<<"\nBinary of the given number= ";    
    for(i=i-1,j=0 ;i>=0 ;i--,j++)         
    {    
        b[j]=a[i];
    }
    for(i=0;i<(sizeof(b)/sizeof(b[0]));i++)
    {
        cout<<b[i];
        
    }
    cout<<"\n";    
    system("pause");
}  