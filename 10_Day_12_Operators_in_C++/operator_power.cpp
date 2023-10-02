#include <iostream>
using namespace std;

int main() {
    // Initialize variables of different data types
    int num1_int = 5;
    float num2_float = 2.5f;
    double num3_double = 3.75;

    // Addition
    double result_int_float_add = num1_int + num2_float;
    double result_float_double_add = num2_float + num3_double;
    double result_int_double_add = num1_int + num3_double;

    // Subtraction
    double result_int_float_sub = num1_int - num2_float;
    double result_float_double_sub = num2_float - num3_double;
    double result_int_double_sub = num1_int - num3_double;

    // Multiplication
    double result_int_float_mul = num1_int * num2_float;
    double result_float_double_mul = num2_float * num3_double;
    double result_int_double_mul = num1_int * num3_double;

    // Division
    double result_int_float_div = num1_int / num2_float;
    double result_float_double_div = num2_float / num3_double;
    double result_int_double_div = num1_int / num3_double;

    // Display results
    cout << "Results of Arithmetic Operations:" << endl;
    cout << "Addition (int + float): " << result_int_float_add << endl;
    cout << "Addition (float + double): " << result_float_double_add << endl;
    cout << "Addition (int + double): " << result_int_double_add << endl;

    cout << "Subtraction (int - float): " << result_int_float_sub << endl;
    cout << "Subtraction (float - double): " << result_float_double_sub << endl;
    cout << "Subtraction (int - double): " << result_int_double_sub << endl;

    cout << "Multiplication (int * float): " << result_int_float_mul << endl;
    cout << "Multiplication (float * double): " << result_float_double_mul << endl;
    cout << "Multiplication (int * double): " << result_int_double_mul << endl;

    cout << "Division (int / float): " << result_int_float_div << endl;
    cout << "Division (float / double): " << result_float_double_div << endl;
    cout << "Division (int / double): " << result_int_double_div << endl;

    return 0;
}
