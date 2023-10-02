#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the value of number : ";
    cin>>num;

    int i=1;
    while(i<=num)
    {
        if(num%i == 0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}