/*
*Fibonacci Series Using do while Loop
*/
#include "iostream"

using namespace std;

int main()
{
	int i,n,next_term=1,a=0;
	cout<<"FIBONACCI SERIES USING WHILE LOOP";
	cout<<"\nEnter the Number of terms :-";
	cin>>n;
	cout<<"Fibonnacci Series :- ";
	
	do
	{
		cout<<a<<"   ";
		i=a+next_term	;
		next_term=a;	
		a=i;
		n--;
	}while(n>0);
    cout<<endl;
    system("pause");
    return 0;
}