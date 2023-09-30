//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1

#include <iostream>
using namespace std;

int main() {

    int row,col;

    cout<<"Enter number of rows : ";
    cin>>row;

    cout<<"Enter number of columns : ";
    cin>>col;

    for(int i=row; i>0; i--)
    {
        for(int j=col; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}