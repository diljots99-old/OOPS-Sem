/*
* To find greatest among three integers and output the largest integer
*/
#include "iostream"

using namespace std;

class greatest
{
private:
    int num1,num2,num3,MAX;
public:
    greatest()
    {
        cout<<"\t\tGREATEST AMONG THREE NUMBERS\n";
        cout<<"Enter three numbers Respectively (Each Seprated By Space)\n";
        cin>>num1>>num2>>num3;
        if((num1>num2)&&(num1>num3))
            MAX=num1;
        else if((num2>num1)&&(num2>num3))
            MAX=num2;
        else
            MAX=num3;
        cout<<"Greatest of them is "<<MAX<<endl;    
    }
};

int main()
{
    new greatest();
    system("pause");
    return 0;
}