// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

int main() {

    int rows;
    
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=1; i<=rows; i++)
    {
        char c = 'A';
        for(int j=1; j<=(rows-i+1); j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}


