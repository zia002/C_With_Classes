/*
Print prime number from A to B;
and in this range how many prime numbers are in there..
*/
#include<iostream>
using namespace std;
int main()
{
    int A,B,i,j,count=0;
    cout<<"Entet First Number:";
    cin>>A;
    cout<<"Entet Last Number:";
    cin>>B;
    if(A<=2)
    {
        cout<<"2 ";
        count=1;
    }
    for(i=A; i<=B; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
            else
            {
                if(j==(i-1))
                {
                    cout<<i<<" ";
                    count=count+1;
                }
            }
        }
    }
    cout<<"\nIn This range,there are "<<count<<" value";
    return 0;
}
