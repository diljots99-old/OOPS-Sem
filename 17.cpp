/*
*Calculate cube of integer(using inline function)
*/
#include "iostream"

using namespace std;

void inline cube(int n)
{
    int rst;
    rst=n*n*n;
    cout<<"The Cube of "<<n<<" is "<< rst<<endl;
}
 
int main()
{
    int number;
    cout<<"CUBE OF GIVEN NUMBER\n Enter the Number :-";
    cin>>number;
    cube(number);
    system("pause");
    return 0; 
}