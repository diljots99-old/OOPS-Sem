#include <iostream>
#include <exception>
using namespace std;


int main()
{
   try
    {
        exception sas;
        int a,b,x,c;
        cout<<"Enter two number = ";
        cin>>a>>b;
        x=a-b;
        c=a/x;
        
        cout <<"Result = "<<c;
    }
    catch(bad_exception &e)
    {   
        cout<<"Standard Exception "<<e.what();
    }
    system("pause");

    return 0;
}
