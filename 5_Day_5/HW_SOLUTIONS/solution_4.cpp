// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include<iostream>
using namespace std;

int main()
{
    int first_num = 220;
    int difference = 7;

    for(int i=first_num; i<=730; i+=difference)
    {
        cout<< i <<endl;
    }
}