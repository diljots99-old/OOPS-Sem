/*
*implementation of class and object
*/
#include "iostream"

using namespace std;

class person //new class is created
{
    string name;//Member Variable
    int age;//Member Variable

   public:
    void getData()//Member Function
    {
        cout <<"Enter The Name = ";
        cin>>name;
        cout<<"Enter Age = ";
        cin>>age;
    }
    void display()//Member Function
    {
        cout<<"Name = "<<name<<"\nAge ="<<age<<endl;
    }
} ;

int main()
{
    person p;//object of class is created
    p.getData();
    cout<<"\n You Enterd \n";
    p.display();
    system("pause");
    return 0;
}
