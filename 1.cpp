/*
* To find greatest among three integers and output the largest integer
*/
#include "iostream"

using namespace std;

int greatest(int num1,int num2,int num3)
{
    int MAX;
    if((num1>num2)&&(num1>num3))
        MAX=num1;
    else if((num2>num1)&&(num2>num3))
        MAX=num2;
    else
        MAX=num3;
    return MAX;
}

int main()
{
    int num1,num2,num3;
    cout<<"\t\tGREATEST AMONG THREE NUMBERS\n";
    cout<<"Enter three numbers Respectively (Each Seprated By Space)\n";
    cin>>num1>>num2>>num3;
    cout<<"Greatest of them is "<<greatest(num1,num2,num3)<<endl;
    system("pause");
    return 0;
}
