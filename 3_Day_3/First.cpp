// Importing iostream liabrary which include code of cout
#include<iostream>

// Here we are declaring that specifically from iostream we want to use std namespace in which code of cout it predefined
using namespace std;

//  This is a special function from where execution starts
int main()
{
    //  Declaring Variables of various data types in c++

    // integer data type - 4 byte
    int a = 10;

    // also we can declare multiple variables in a single line
    int b = 20, c = 30, d = 40;

    // float data type - 4 byte
    float f = 2.4;

    // double data type - 8 byte
    double db = 4.224;

    // boolean data type - 1 byte
    bool boolean1 = 1;
    bool boolean2 = 0;

    // character data type - in this data type we need to take a point in consideration that we can store
    // only a character in a variable
    //  It takes 1 byte
    char ch = 'c';
    
    // using cout function to print data on screen | also i have added variations using which we can print
    //  like printing various words in a line or change line
    cout<<"Hello Krishna";
    cout<<"Hello"<<" "<<"Krishna";
    cout<<"This is lecture 3 notes \n";
    cout<<"This is introduction to C++ programming"<<endl;


    //  Printing variables
    cout<< a << endl;
    cout<< b <<" "<< c <<" "<< d ;
    cout<< f << endl;
    cout<< db << endl; 
    cout<< boolean1 <<" "<< boolean2; 


}