/*
*Polymorsiphm && Object pointer
*/
#include "iostream"

using namespace std;

class BC 
{
    public:
        int b;
        void display()
        {
            cout<<"\nBase Display"<<"\nB :- "<<b<<endl;
        }
        virtual void show()
        {
            cout<<"\nBase show"<<"\nB :- "<<b<<endl;
        }
};

class DC : public BC
{
 public:
        int d=0;
        void display()
        {
            cout<<"\nDerived Display"<<"\nB :- "<<b<<"\nD :-"<<d<<endl;
        }
        void show()
        {
            cout<<"\nDerived  show"<<"\nB :- "<<b<<"\nD :-"<<d<<endl;
        }
};

int main(int argc, char const *argv[])
{
    BC *bptr;
    BC base;
    DC derived;
    bptr=&base;
    cout<<"\nBase pointer Contains Address of Base class Object";
    bptr->b=100;
    bptr->display();
    bptr->show();
    bptr=&derived;
    cout<<"\nBase pointer Contains Address of Derived class Object";
    bptr->b=200;
    //bptr->d=500;
    bptr->display();
    bptr->show();
    bptr=&derived;
    system("pause");
    return 0;
}
