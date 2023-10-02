#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    bool ans=true;

    cout<<"Enter the value of number whose prime test needs to be preformed : ";
    cin>>n;

    while(i<n)
    {
        if(n%i == 0)
        {
            ans = false;
            break;
        }
        i++;
    }

    if(ans)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
}