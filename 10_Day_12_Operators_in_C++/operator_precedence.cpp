#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, c = 10;

    // Arithmetic Operators Precedence Examples

    // Example 1: Multiplication and Division have higher precedence than Addition and Subtraction.
    int result1 = a + b * c; // (3 * 10) + 5 = 35
    int result2 = (a + b) * c; // (5 + 3) * 10 = 80

    // Example 2: Modulus has the same precedence as Multiplication and Division.
    int result3 = a * b % c; // (5 * 3) % 10 = 5

    // Example 3: Addition and Subtraction have the same precedence.
    int result4 = a + b - c; // (5 + 3) - 10 = -2

    // Example 4: Unary Minus (Negation) has a high precedence.
    int result5 = -a + b; // -(5) + 3 = -2

    // Example 5: Parentheses can be used to change precedence.
    int result6 = (a + b) * (c - a); // (5 + 3) * (10 - 5) = 40

    // Example 6: More complex expression with various operators.
    int result7 = a * (b + c) / (a - b) % c; // (5 * (3 + 10) / (5 - 3)) % 10 = 1

    // Display results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    cout << "Result 4: " << result4 << endl;
    cout << "Result 5: " << result5 << endl;
    cout << "Result 6: " << result6 << endl;
    cout << "Result 7: " << result7 << endl;

    return 0;
}
