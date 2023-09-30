//          E
//        E D 
//      E D C 
//    E D C B
//  E D C B A



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

        for(char k='E'; k>'E'-i; k--)
        {
            cout<<" "<<k;
        }

        cout<<endl;
    }
}

