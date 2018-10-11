/*
*using switch 
*         - Months  of Years
*/

#include "iostream"

using namespace std;

class months_of_years
{
    int num;
public:
    months_of_years()
    {
        cout<<"\t\t\tMONTHS OF YEAR\n";
        cout<<"Enter number :- ";
        ab:
        cin>>num;
        cout<<"\nResult :- ";
        switch (num)
        {
            case 1: cout<<"\n January \n";
                 break;
            case 2: cout<<"\n Febuary \n";
                 break;
            case 3: cout<<"\n March \n";
                 break;
            case 4: cout<<"\n April \n";
                 break;
            case 5: cout<<"\n May \n";
                 break;
            case 6: cout<<"\n June \n";
                 break;
            case 7: cout<<"\n July \n";
                 break;
            case 8: cout<<"\n August \n";
                 break;
            case 9: cout<<"\n September \n";
                 break;
            case 10: cout<<"\n October \n";
                 break;
            case 11: cout<<"\n November \n";
                 break;
            case 12: cout<<"\n December \n";
                 break;
            default:cout<<"WORNG CHOICE\nEnter choice again:-  ";
                    goto ab;
                    break;
        }
    }
};

int main()
{
    new months_of_years();
    system("pause");
    return 0;
}