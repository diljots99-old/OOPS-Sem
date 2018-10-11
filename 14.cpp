/*
*Prime Number
*/
#include <iostream>
using namespace std;

int main()
{
    long long unsigned int n, i;
    bool Prime = true;
    cout<<"CHECK WHEATHER A NUMBER IS PRIME OR NOT\n";
    cout << "Enter a positive integer: ";
    cin >> n;

    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            Prime = false;
            break;
        }
    }
    if (Prime)
        cout << "This is a prime number\n";
    else
        cout << "This is not a prime number\n";
    system("pause");
    return 0;
}