/*
*Write a program to find largest and smallest elements among the array along with sum and average of element
*/
#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
    int j=0,SIZE,sum=0,avg,largest,smallest;
    cout<<"SUM, AVERAGE, LARGEST AND SMALLEST AMONG ARRAY ELEMENTS";
    cout<<"\nEnter the Size of Array :";
    cin>>SIZE;
    cout<<"\nEnter the Arrary Elements :";
    int array[SIZE],copy[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        cin>>array[i];
        copy[i]=array[i];
    }
    largest=smallest=copy[0];
    while(j < SIZE)
    {
        if(largest<copy[j])
        {
            largest=copy[j];
        }
        if(smallest>copy[j])
        {
            smallest=copy[j];
        }
        sum += copy[j];
        j++;
    }
    avg=sum/SIZE;
    cout<<"Largest Element is "<<largest<<endl;
    cout<<"Smallest Element is "<<smallest<<endl;
    cout<<"Sum of Array Elements is "<<sum<<endl;
    cout<<"Average Of array elements is "<<avg<<endl;
    system("pause");
    return 0;
}
