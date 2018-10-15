/*
*To find the no. is even or odd
*/
#include "iostream"

using namespace std;
class evenOdd
{
    int number;
    public:
    evenOdd()
    {
        cout<<"\t\t\tEVEN ODD"<<"\nEnter the value:- ";
        cin>>number;
        if((number%2)==0)
        {
            cout<<number<<" is Even\n";
        }
        else
        {
            {
            cout<<number<<" is odd\n";
            }

        }

    }
};

int main()
{
    new evenOdd;
    system("pause");
    return 0;
}