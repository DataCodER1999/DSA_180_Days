//          A
//        A B 
//      A B C 
//    A B C D
//  A B C D E

#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout<<"Enter total number of rows : ";
    cin>>rows;

    cout<<endl;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            cout<<"  ";
        }

        for(char k='A'; k<'A'+i; k++)
        {
            cout<<" "<<k;
        }

        cout<<endl;
    }
}