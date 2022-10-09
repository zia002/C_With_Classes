//Is___it___prime__number?
#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout<<"Entet Number:";
    cin>>number;
    for(i=2; i<number; i++)
    {
        if(number%i==0)
        {
            cout<<"it is Not a prime number";
            break;
        }
        if(i==(number-1))
            cout<<"It is a Prime number";
    }
    return 0;
}