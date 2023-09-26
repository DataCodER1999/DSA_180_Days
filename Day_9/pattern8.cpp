// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1


#include <iostream>
using namespace std;

int main() {

    int rows;
    
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=1; i<=rows; i++)
    {
        for(int j=rows; j>=(rows-i+1); j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


