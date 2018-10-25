/*
*Nesting Member function
*/
#include<iostream>

using namespace std;

class set
{
    int m,n;
public:
    void input()
    {
        cout<<"Input values of m and n\n";
        cin>>m>>n;
    }
    int largest()
    {
        if(m>=n)
            return m;
        else
            return n;
    }
    void display()
    {
        cout<<"Largest value="<<largest()<<"\n";
    }

};
int main()
{
    set obj;
    obj.input();
    obj.display();
    system("pause");
}
