/*
*To making Calculater using switch.
*/
#include "iostream"

using namespace std;

class calculator
{
    int num1,num2;
    char ch;
    public:
        calculator()
        {
            cout<<"\t\tCalculator\n";
            cout<<"\t1.Addition +\n\t2.Subtraction (-)\n\t3.Divition (/)\n\t4.Multiplication (*)";
            cout<<"Enter in (oprand operator oprand)\n";
            cout<<"Enter :-";
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
        }
};
int main()
{
    new calculator();
    system("pause");
    return 0;

}