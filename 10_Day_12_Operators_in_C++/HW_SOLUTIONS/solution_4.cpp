#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the values of a | b | c : ";
    cin>>a>>b>>c;

    if(a>b || a>c)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }
}