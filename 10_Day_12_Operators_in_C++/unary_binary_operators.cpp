#include <iostream>
using namespace std;

int main() {
    // Unary Operators
    int x = 5;
    int y = -x; // Unary minus operator (changes the sign of x)
    int z = ++x; // Pre-increment operator (increments x and returns the new value)
    int w = x--; // Post-decrement operator (returns the current value of x and then decrements it)

    cout << "Unary Operators:" << endl;
    cout << "Unary minus: " << y << endl;
    cout << "Pre-increment: " << z << endl;
    cout << "Post-decrement: " << w << endl;

    // Binary Operators
    int a = 10, b = 3;
    int sum = a + b;        // Addition
    int difference = a - b; // Subtraction
    int product = a * b;    // Multiplication
    int quotient = a / b;   // Division
    int remainder = a % b;  // Modulus

    cout << "\nBinary Operators:" << endl;
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;
    cout << "Modulus: " << remainder << endl;

    return 0;
}
