//          5
//        5 4 
//      5 4 3 
//    5 4 3 2
//  5 4 3 2 1

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

        for(int k=rows; k>rows-i; k--)
        {
            cout<<" "<<k;
        }

        cout<<endl;
    }
}