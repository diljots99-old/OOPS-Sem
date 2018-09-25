//Table Of Given number
#include "iostream"
#include "conio.h"

using namespace std;

class table
{
private:
    int Max,n;
public:
    table()
    {
        cout<< "\t\tTABLE OF GIVEN NUMBER\n";
        cout<< "Enter Table & Max Limit = ";
        cin>>n>>Max;
        for (int i=0;i<=Max;i++)
        {
            cout<<n<<"*"<<i<<"="<<n*i<<"\n";
        }
    }
};

int main()
{
    new table();
    getch();
    return 0;
}
