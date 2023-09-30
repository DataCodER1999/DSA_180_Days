#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout<<"Enter the value of number : ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        sum = sum + i;
    }

    cout<<"Sum of n natural numbers is : "<<sum;
}