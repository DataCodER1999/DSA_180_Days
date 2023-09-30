//          *
//        * * 
//      * * * 
//    * * * *
//  * * * * *


#include <iostream>
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
        for(int k=1; k<i+1; k++)
        
        {
            cout<<" *"; 
        }
        cout<<endl;
    }
}