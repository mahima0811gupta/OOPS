// What is a Function?
// A function is used to reduce code redundancy (avoid writing same code multiple times) to save the memory space
NOTE-
// When a function is called a bunch of task is perform----
// matching argument
// matching return type
// passing the control from calling to defination nd vice versa
// Compiler internally performs thse steps
// This is very ime consuming .in order to save the time,C++ ha concept of inline function


// What is an Inline Function?
// In an inline function, the compiler directly replaces the function call with the function code at compile time.
// So execution becomes faster.
// Syntax
// inline return_type function_name(parameters) {
//     // function body


#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;   // small function
}

int main() {
    cout << "Square of 4 = " << square(4) << endl;
 
    return 0;
}

// square(4) → replaced with 4 * 4

// When to Use Inline Functions
// Small functions (like square, cube, max, min, etc.).
// Functions that are called very frequently.

// 🔹 Limitations
//  Not good for large/complex functions (will increase code size).
//  Avoid loops, recursion, and static variables in inline functions.
