/*
*Basics Of File handling using constructor method
*/
#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
    char name[525];
    int Age,i=0;
    ofstream fout ("Item");
    while(i<16)
    {
        fout<<"https://www.djpunjab.net/punjabi_music/allalbum.php?page="<<i<<"&main=A"<<endl;
        i++;
    }
    

    
    return 0;
}
