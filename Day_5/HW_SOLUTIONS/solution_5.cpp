// Print Sum of square of first n natural number.

#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum = sum + (i*i);
    }

    cout<<"Sum of squares of numbers upto n is : "<<sum;
}