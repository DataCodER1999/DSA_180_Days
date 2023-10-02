#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators (+, -, *, /, %)
    int a = 10, b = 3;
    int sum = a + b;        // Addition
    int difference = a - b; // Subtraction
    int product = a * b;    // Multiplication
    int quotient = a / b;   // Division
    int remainder = a % b;  // Modulus

    cout << "Arithmetic Operators:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Comparison Operators (==, !=, <, >, <=, >=)
    int x = 5, y = 10;
    bool isEqual = (x == y); // Equal to
    bool isNotEqual = (x != y); // Not equal to
    bool isLessThan = (x < y); // Less than
    bool isGreaterThan = (x > y); // Greater than

    cout << "\nComparison Operators:" << endl;
    cout << "Is Equal: " << isEqual << endl;
    cout << "Is Not Equal: " << isNotEqual << endl;
    cout << "Is Less Than: " << isLessThan << endl;
    cout << "Is Greater Than: " << isGreaterThan << endl;

    // Logical Operators (&&, ||, !)
    bool a = true, b = false;
    bool result1 = (a && b); // Logical AND
    bool result2 = (a || b); // Logical OR
    bool result3 = !a;       // Logical NOT

    cout << "\nLogical Operators:" << endl;
    cout << "Logical AND: " << result1 << endl;
    cout << "Logical OR: " << result2 << endl;
    cout << "Logical NOT: " << result3 << endl;

    // Assignment Operator (=)
    int num = 42; // Assigning the value 42 to the variable 'num'

    // Increment and Decrement Operators (++, --)
    int count = 5;
    count++; // Increment 'count' by 1
    count--; // Decrement 'count' by 1

    // Conditional (Ternary) Operator (? :)
    int age = 18;
    string result = (age >= 18) ? "Adult" : "Child"; // Ternary operator

    // Bitwise Operators (&, |, ^, ~, <<, >>)
    int bitwiseAnd = a & b; // Bitwise AND
    int bitwiseOr = a | b;  // Bitwise OR
    int bitwiseXor = a ^ b; // Bitwise XOR
    int bitwiseNot = ~a;    // Bitwise NOT
    int leftShift = a << 1; // Left shift  (a * (2**1)) - There can be scenario that for very big no we can get -ve no
    // left shift and right shift for -ve numbers is compiler dependent
    
    int rightShift = a >> 1; // Right shift (a / (2**1))

    cout << "\nBitwise Operators:" << endl;
    cout << "Bitwise AND: " << bitwiseAnd << endl;
    cout << "Bitwise OR: " << bitwiseOr << endl;
    cout << "Bitwise XOR: " << bitwiseXor << endl;
    cout << "Bitwise NOT: " << bitwiseNot << endl;
    cout << "Left Shift: " << leftShift << endl;
    cout << "Right Shift: " << rightShift << endl;

    return 0;
}
