#include<iostream>
using namespace std;

int main()
{
    int n, i=1, fact=1;

    cout<<"Enter the value of n : ";
    cin>>n;

    
    do{
        fact = fact * i;
      i++;
    }while(i<=n);

    cout<<"Factorial of the given number is : "<<fact;
}