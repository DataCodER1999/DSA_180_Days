//          1
//        2 1 
//      3 2 1 
//    4 3 2 1
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

        for(int k=i; k>0; k--)
        {
            cout<<" "<<k;
        }

        cout<<endl;
    }
}