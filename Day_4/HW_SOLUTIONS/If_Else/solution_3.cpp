// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.


#include<iostream>
using namespace std;

int main()
{
    int month_number;


    cout<<"Enter month number : ";
    cin>>month_number;

    if(month_number == 1)
    {
        cout<<"January";
    }

    else if(month_number == 2)
    {
        cout<<"February";
    }
    
    else if(month_number == 3)
    {
        cout<<"March";
    }
    
    else if(month_number == 4)
    {
        cout<<"April";
    }
    
    else if(month_number == 5)
    {
        cout<<"May";
    }
    
    else if(month_number == 6)
    {
        cout<<"June";
    }
    
    else if(month_number == 7)
    {
        cout<<"July";
    }
    else if(month_number == 8)
    {
        cout<<"August";
    }
    
    else if(month_number == 9)
    {
        cout<<"September";
    }
    
    else if(month_number == 10)
    {
        cout<<"October";
    }
    
    else if(month_number == 11)
    {
        cout<<"November";
    }
    
    else if(month_number == 12)
    {
        cout<<"December";
    }
    
}