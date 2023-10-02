#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    if(n>0 && n%2 == 0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}