#include<iostream>
using namespace std;

// 1st method
int main()
{
    int num;
    
    cout<<"Enter number whose table is to br printed : ";
    cin>>num;

    for(int i=1; i<=10; i++)
    {
        cout<<num <<" * "<<i << " = " << num*i<< endl;
    }
}


// 2nd method
int main()
{
    int num;
    
    cout<<"Enter number whose table is to br printed : ";
    cin>>num;

    for(int i=num; i<=num*10; i+=num)
    {
        cout<<i<<" ";
    }
}