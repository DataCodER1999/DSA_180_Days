#include<iostream>
using namespace std;

int main()
{
    int day_number;

    cout<<"Enter day number : ";
    cin>>day_number;

    if(day_number > 0 && day_number <= 7)
    {
        if(day_number == 1)
        {
            cout<<"Monday";
        }
        
        else if(day_number == 2)
        {
            cout<<"Tuesday";
        }
        
        else if(day_number == 3)
        {
            cout<<"Wednesday";
        }
        
        else if(day_number == 4)
        {
            cout<<"Thursday";
        }
        
        else if(day_number == 5)
        {
            cout<<"Friday";
        }

        else if(day_number == 6)
        {
            cout<<"Saturday";
        }

        else if(day_number == 7)
        {
            cout<<"Sunday";
        }
    }

    else
    {
        cout<<"Enter Valid Week day Number";
    }
}