// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25


// Method-1
#include <iostream>
using namespace std;

int main() {

    int row,col;
    

    cout<<"Enter number of rows : ";
    cin>>row;

    cout<<"Enter number of columns : ";
    cin>>col;
    
    int s = 1;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            
            cout<<s<<"    ";
            s++;
        }
        
        cout<<endl;
    }
}


// Method-2
#include <iostream>
using namespace std;

int main() {

    int row,col;
    

    cout<<"Enter number of rows : ";
    cin>>row;

    cout<<"Enter number of columns : ";
    cin>>col;
    
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            
            cout<<(i-1)*5 + j;
        }
        
        cout<<endl;
    }
}

