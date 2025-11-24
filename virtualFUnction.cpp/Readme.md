virual base class/virtual function---
virtual is a keyword in C++.
A virtual function is redefined in derived class.
When a virtual function is defined in base class, then the pointer to base class is created. Now, on the basis of type of object assigned, the respective class function is called.

Base Class Pointer and Derived Object:-
A base class pointer can point to a derived class object or base class object. 
when is point to the derived class object -
    Without virtual keyword → base class function executes.
    With virtual keyword → derived class function executes (runtime polymorphism).

What is Binding?
Binding = Process of deciding which function to call.
In C++, there are two types:

(a) Early Binding (Static / Compile-Time Binding)
Happens at compile-time.
Compiler decides which function to call, based on the type of pointer/reference, not the actual object.
Default in C++.
Used in function overloading and normal inheritance without virtual functions.
Fast because decision is taken at compile time.

(b) Late Binding (Dynamic / Runtime Binding)
Happens at runtime.
Achieved using virtual functions.
The function call depends on the actual object being pointed to.
Supports runtime polymorphism.


Pure Virtual Function in C++
A pure virtual function is a virtual function in C++ that has no definition in the base class and is only declared using = 0.
class Base {
public:
    virtual void display() = 0;   // pure virtual function
};
It must be overridden by derived classes.
A class containing at least one pure virtual function is called an abstract class.


INTERFACE-an interface represents a contract or blueprint that defines WHAT a class must do, but not HOW it does it.
It only defines function names, parameters, and expected behavior.
Actual implementation is left to the classes that inherit the interface.
This helps developers build software that is modular, testable, and extendable.
