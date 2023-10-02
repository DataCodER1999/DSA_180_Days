#include<iostream>
using namespace std;

int main()
{
    int temperature;

    cout<<"Enter the current temperature of swimming pool (In Fahrenheit): ";
    cin>>temperature;

    if(temperature>=70 && temperature<90)
    {
        cout<<"Yes you can swim";
    }
    else
    {
        cout<<"No you cannot swim";
    }
}