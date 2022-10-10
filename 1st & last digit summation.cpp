//summation of First and last digit of user given number.
#include<iostream>
using namespace std;
int main()
{
    int n,tem,count=0,rem;
    int sum=0,first,last;
    cout<<"Enter Your number:";
    cin>>n;
    tem=n;
    last=tem%10;
    while(tem!=0)
    {
        rem=tem%10;
        tem=tem/10;
        first=rem;
    }
    cout<<"Fist digit:"<<first<<endl;
    cout<<"Last digit:"<<last<<endl;
    cout<<"Summation of first & last digit:\n";
    cout<<first<<"+"<<last<<"="<<first+last;
    return 0;
}
