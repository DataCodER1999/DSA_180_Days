// In C++, the scope of a variable refers to the region of code where that variable is accessible and can be used. Here's a short explanation with an example:




// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5; // Variable x is declared and initialized within the main() function's scope.

//     {
//         int y = 10; // Variable y is declared within a nested block's scope.
//         cout << x << endl; // x is accessible here.
//         cout << y << endl; // y is accessible here.
//     }

//     cout << x << endl; // x is still accessible here.
//      cout << y << endl; // Error: y is not accessible here, outside its scope.

//     return 0;
// }



// In this example, x is declared within the main() function's scope, which means it can be used throughout the entire main() function. On the other hand, y is declared within a nested block's scope, which means it is only accessible within that block. Once you move outside that block, attempting to access y will result in an error because it's out of scope.