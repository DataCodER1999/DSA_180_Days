// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e


#include <iostream>
using namespace std;

int main() {

    int row,col;
    char start = 'a';

    cout<<"Enter number of rows : ";
    cin>>row;

    cout<<"Enter number of columns : ";
    cin>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<start<<" ";
        }
        start++;
        cout<<endl;
    }
}