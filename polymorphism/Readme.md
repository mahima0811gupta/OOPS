Polymorphism means one action, many forms.
It allows the same function or operator to behave differently based on the object or data type it is working with.
For example, the word “draw()” may mean drawing a circle for one object and drawing a rectangle for another.
This makes programs more flexible and easier to maintain.

🔸 Types of Polymorphism in C++
1. Compile-Time Polymorphism (Static Polymorphism)
The decision about which function or operator to call is made at compile time.
Achieved through:
Function Overloading –
When multiple functions have the same name but different parameters.

Operator Overloading – 
// operator overloading allows us to redefine the meaning of operators (like +, -, *, <<, etc.) for user-defined data types (like classes).
//  Basically, we make operators work with objects.
// Some operators like ::, sizeof, ?:, and . cannot be overloaded.
🟢 Example idea: Using + for adding two complex numbers or concatenating two strings.

2. Runtime Polymorphism (Dynamic Polymorphism)

The decision about which method to call is made at runtime.
Achieved using Method Overriding (along with inheritance and virtual functions).
The child class provides its own version of a function that already exists in the parent class.
🟢 Example idea: The show() function works differently for different derived classes even though they share the same function name.

🔹 Why Polymorphism is Important
Increases code reusability.
Makes code flexible and extensible.
Allows the same interface to be used for different data types or objects.
Supports real-world modeling where the same action can have multiple meanings (like a person being a father, husband, and employee).
