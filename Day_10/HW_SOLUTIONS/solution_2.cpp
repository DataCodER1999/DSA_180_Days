//          A
//        B B 
//      C C C 
//    D D D D
//  E E E E E



#include<iostream>
using namespace std;

int main()
{
    int rows;
    char c = 'A';
    
    cout<<"Enter total number of rows : ";
    cin>>rows;

    cout<<endl;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            cout<<"  ";
        }

        for(char k=1; k<i+1; k++)
        {
            cout<<" "<<c;
        }
        c++;
        cout<<endl;
    }
}