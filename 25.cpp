#include <iostream>
#include <exception>
#include <typeinfo>
using namespace std;

class A{virtual f(){};};
int main()
{
   try

    {
        A *a=NULL;
        typeid(*a);
    }
    catch(exception &e)
    {
        cout<<"Standard Exception "<<e.what();
    }
    system("pause");
    return 0;
}
