// a
// b b
// c c c
// d d d d 
// e e e e e


#include <iostream>
using namespace std;

int main() {

    int rows;
    char c = 'a';
    
    cout<<"Enter the number of rows : ";
    cin>>rows;
    
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<i+1; j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
        c++;
    }
}