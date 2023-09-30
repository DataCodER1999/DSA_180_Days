#include<iostream>
using namespace std;

int main()
{
    int number;
    int power;
    int answer = 1;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter power of the number : ";
    cin>>power;

    for(int i=1; i<=power; i++)
    {
        answer = answer * number;
    }    

    cout<<"Number - "<< number<< " raised to power - "<<power<<" is "<<answer;
}