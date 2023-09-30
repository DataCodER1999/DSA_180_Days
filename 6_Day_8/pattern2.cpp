// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

#include <iostream>
using namespace std;

int main() {

    int row,col;

    cout<<"Enter number of rows : ";
    cin>>row;

    cout<<"Enter number of columns : ";
    cin>>col;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<" 10 ";
        }
        cout<<endl;
    }
}