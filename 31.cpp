/*
*Half Pyramid (*).
*/
#include "iostream"
using namespace std;

int main()
{
    int rows;

    cout<<"HALF PYRAMID PATTERN\nEnter number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}
