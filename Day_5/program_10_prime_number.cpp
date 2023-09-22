#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the value of num : ";
    cin>>num;
    bool flag = true;

    if(num < 2)
    {
        cout<<"not a prime no.";
    }
    
    else
    {
        for(int i=2; i<num; i++)
        {
            if(num%i == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout<<"prime number";
        }
        else
        {
            cout<<"Not a prime number";
        }
    }
   
}