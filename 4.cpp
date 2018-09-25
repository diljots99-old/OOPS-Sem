//cin & cout Functions
#include "iostream"
#include "conio.h"

using namespace std;
class person
{
    string name;
    int age;

   public :
    void getData()
    {
        cout <<"Enter The Name = ";
        cin>>name;
        cout<<"Enter Age = ";
        cin>>age;
    }
    void display()
    {
        cout<<"Name = "<<name<<"\nAge ="<<age;
    }
} ;

int main()
{
    person p;
    p.getData();
    p.display();
    getch();
    return 0;
}
