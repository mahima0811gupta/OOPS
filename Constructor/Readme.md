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




When is a copy constructor called?
When an object is initialized with another existing object: Hero newHero = oldHero; or Hero newHero(oldHero);
When an object is passed by value to a function.
When an object is returned by value from a function.
