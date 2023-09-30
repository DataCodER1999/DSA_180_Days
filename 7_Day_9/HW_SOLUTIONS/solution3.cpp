// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15


#include <iostream>
using namespace std;

int main() {

    int rows;
    
    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<endl;

    for(int i=1; i<=rows; i++)
    {
        int c=10;
        for(int j=1; j<i+1; j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}


