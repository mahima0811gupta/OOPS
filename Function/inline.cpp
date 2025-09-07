// What is a Function?
// A function is used to reduce code redundancy (avoid writing same code multiple times).
// Saves time, memory, and storage by reusing code.
// When a function is called:

// Control passes from calling function → function definition → back to caller.
// Compiler internally performs many steps: argument matching, return type checking, etc.

// 🔹 Problem with Normal Functions
// Calling a function takes extra time:
// Passing control to definition.
// Matching parameters and return type.
// Returning control back.
// This overhead slows down execution if function is called many times.


// What is an Inline Function?
// Normally, when you call a function in C++, the control jumps to the function definition, executes it, and then comes back.
// This process takes extra time (called function call overhead).
//  To save this overhead, we use an inline function.
// In an inline function, instead of jumping, the compiler directly replaces the function call with the function code at compile time.
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