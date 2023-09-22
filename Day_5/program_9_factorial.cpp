#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;

    cout<<"Enter number whose factorial is to be found : ";
    cin>>num; 

    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    cout<<"Factorial of num is : "<<fact;
}