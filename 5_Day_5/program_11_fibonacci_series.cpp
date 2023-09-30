#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int position;

    cout<<"Enter which element you want to get from fibonacci series : ";
    cin>>position;

    for(int i=3; i<=position; i++)
    {
        int temp = a;
        a = b;
        b = b + temp;
    }

    cout<<"Fibonacci number at position "<< position << " is " <<b;
}
