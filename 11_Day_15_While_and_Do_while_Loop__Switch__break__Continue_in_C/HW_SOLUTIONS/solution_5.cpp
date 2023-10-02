#include<iostream>
using namespace std;

int main()
{
    char a='a', A='A';
    while(a<='z' && A<='Z')
    {
        cout<<a<<" : "<<A;
        cout<<endl;
        a++;
        A++;
    }
}