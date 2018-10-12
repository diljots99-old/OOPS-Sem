/*
*Sum of three numbers using functions
*/
#include "iostream"

using namespace std;

int sum(int a,int b,int c)
{
    int rst;
    rst=a+b+c;
    return rst;
}

int main()
{
    int num1,num2,num3;
    cout<<"SUM OF THREE NUMBERS USING FUNCTION\n Enter the number :-";
    cin>>num1>>num2>>num3;
    cout<<"Result :- " <<sum(num1,num2,num3);
    system("pause");
    return 0;
}
