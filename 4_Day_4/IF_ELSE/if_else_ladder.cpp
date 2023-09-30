#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the value of num : ";
    cin>>num;

    // If else ladder
    if(num > 0)
    {
        cout<<"Positive number";
    }
    else if(num < 0)
    {
        cout<<"Negative number";
    }

    else
    {
        cout<<"Zero";
    }
}