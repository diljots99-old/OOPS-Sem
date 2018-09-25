//Sum of Digits
#include "iostream"
#include "conio.h"

using namespace std;

class Sum_of_digits
{
    private:
        int  t=0,sum=0,remainder=0;
    public:
       void Sum_of_digit(int n)
        {
           t = n;
           do
           {
              remainder = t % 10;
              sum       = sum + remainder;
              t         = t / 10;
           }while (t !=0);
           cout<<"Sum of digits of "<<n<<" = "<<sum<<"\n";
        }
};

int main()
{
    int number;
    Sum_of_digits obj;
    cout<<"\t\tSUM OF DIGITS\n"<<"Enter a Number = ";
    cin>>number;
    obj.Sum_of_digit(number);
    system("pause");
    return 0;
}
