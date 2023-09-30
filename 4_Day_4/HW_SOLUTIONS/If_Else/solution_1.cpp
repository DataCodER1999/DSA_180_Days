// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout<<"Enter the value of num1 : ";
    cin>>num1;

    cout<<"Enter the value of num2 : ";
    cin>>num2;

    if(num1>num2)
    {
        cout<<"num1 is greater than num2";
    }

    else
    {
        cout<<"num2 is greater than num1";
    }
}