Constructors
A constructor is a special member function of a class that is automatically invoked (called) when an object of that class is created.

Key characteristics of constructors:

It has the same name as the class.

It has no return type (not even void).

It is used to initialize the object's data members.

Types of Constructors
1 Default Constructor:

It has no parameters.
If you don't define any constructor for a class, the compiler automatically provides a public default constructor (known as the implicit default constructor).
If you define any constructor (default or parameterized), the compiler will not provide the implicit default constructor. You'll need to define it explicitly if you want it.

2.Parameterized Constructor:
It accepts one or more parameters.
It allows you to initialize the object's data members with specific values at the time of object creation.

3Copy Constructor:

A copy constructor is used to create a new object by initializing it with an existing object of the same class.
It takes a reference to an object of the same class as its parameter.



Constructor Overloading
Constructor overloading can be defined as the concept of having more than one constructor with different parameters so that every constructor 
can perform a different task.As there is a concept of function overloading, similarly constructor overloading is applied when 
we overload a constructor more than a purpose.The declaration is the same as the class name, but there is no return type as
they are constructors.

The criteria to overload a constructor is to differ the number of arguments or the type of arguments.
The corresponding constructor is called depending on the number and type of arguments passed.
If you don't provide a copy constructor, the compiler provides a default copy constructor (also known as implicit copy constructor).
Syntax: ClassName(const ClassName &obj)

#include <iostream>
using namespace std;

class construct
{ 
public:
    float area; 
    // Constructor with no parameters
    construct()
    {
        area = 0;
    }
    // Constructor with two parameters
    construct(int a, int b)
    {
        area = a * b;
    }
    void disp()
    {
        cout<< area<< endl;
    }
};

int main()
{
    // Constructor Overloading 
    // with two different constructors
    // of class name
    construct o;
    construct o2( 10, 20);
    o.disp();
    o2.disp();
    return 1;
}


When is a copy constructor called?
When an object is initialized with another existing object: Hero newHero = oldHero; or Hero newHero(oldHero);
When an object is passed by value to a function.
When an object is returned by value from a function.
