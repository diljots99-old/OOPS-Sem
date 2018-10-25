/*
*To making Calculater using switch.
*/
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{
        int num1,num2;
        char ch,chx;
        cout<<"\t\tCalculator\n";
        cout<<"\t1.Addition +\n\t2.Subtraction (-)\n\t3.Division (/)\n\t4.Multiplication (*)";
        cout<<"\nEnter in (oprand operator oprand)";
        restart:
        cout<<"\nEnter :-";
        cin>>num1>>ch>>num2;
        switch(ch)
        {
        case '+':cout<<"\nResult := "<<num1+num2<<endl;
                break;
        case '-':cout<<"\nResult := "<<num1-num2<<endl;
                break;
        case '/':cout<<"\nResult := "<<num1/num2<<endl;
                break;
        case '*':cout<<"\nResult := "<<num1*num2<<endl;
                break;
        default:cout<<"\nWrong Inputs";
                break;
        }
        cout<<"Another Calculation (Y/N)";
        chx=getch();
        if(chx=='y'||chx=='Y')
        {
               goto restart;
        }
        system("pause");
        return 0;
}
