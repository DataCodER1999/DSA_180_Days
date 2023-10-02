#include<iostream>
using namespace std;

int main()
{
    int day_no;

    cout<<"Enter day number : ";
    cin>>day_no;

    switch(day_no)
    {
        case 1:cout<<"Monday";
               break;
        case 2:cout<<"Tuesday";
               break;
        case 3:cout<<"Wednesday";
               break;
        case 4:cout<<"Thursday";
               break;
        case 5:cout<<"Friday";
               break;
        case 6:cout<<"Saturday";
               break;
        case 7:cout<<"Sunday";
               break;
        default:cout<<"Please enter correct number | Valid range is 1-7 ";
    }
}