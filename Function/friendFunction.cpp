// Friend Function 
// 1. Why do we need it?
// Normally, the private section of a class is not accessible from outside.
// But sometimes, we want an outside function to access private/protected members.
// For this, we use the concept of friend function.
In C++, a friend function is a special function that is not a member of a class but still has access to the class’s private and protected members.
It is declared inside the class using the keyword friend.
    // 2. Key Points
// A friend function cannot be called using an object of the class.
// It is called like a normal function.
// A friend function can access the private/protected resources of a class, but it needs an object of that class.
// A friend function is declared inside the class using the friend keyword and friend function has object as a argyment

#include <iostream>
using namespace std;

class Box {
private:
    int length = 10;

    // friend function declaration
    friend void show(Box b);
};

// friend function definition
void show(Box b) {
    cout << "Length = " << b.length << endl;
}

int main() {
    Box b1;
    show(b1);  // called like normal function
    return 0;
}
OUTPUT-Length of box: 10


// Friendship is one-way (not mutual).
// If X declares Y as a friend, Y can access X’s private members.
// But the reverse is not true unless explicitly declared.
// So, it is a one-sided friendship.



Interview Questions

Q1. What is a friend function in C++?
👉 A non-member function that can access private and protected members of a class.

Q2. Does a friend function violate encapsulation?
👉 Yes, partially, because it allows external access to private data.

Q3. How do you define a friend function?
👉 Declare it inside the class with the friend keyword and define it normally outside.

Q4. Can a friend function be inherited?
👉 ❌ No, it is not inherited by derived classes.

Q5. Can we call a friend function using an object?
👉 ❌ No, since it is not a member function, it is called like a normal function
