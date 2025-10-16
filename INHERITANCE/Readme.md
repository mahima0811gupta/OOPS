1. Definition

Inheritance is a feature of Object-Oriented Programming (OOP) where a derived class (child) can acquire the properties (data members) and behaviors (methods) of another base class (parent).
It models “is-a” relationships in real life.

Example in concept:

A Car “is a” Vehicle → it inherits common vehicle features like wheels, engine, brakes, etc., while adding its own unique features like air conditioning or music system.

2. Purpose of Inheritance

Code Reuse: Avoid rewriting common code in multiple classes.

Logical Structure: Models real-world relationships among entities.

Extensibility: New functionality can be added in derived classes without changing the base class.

Maintainability: Changes in common features are done in the base class, automatically affecting derived classes.

3. Types of Inheritance

Inheritance in C++ can be classified based on the relationship between classes:

Single Inheritance:

One derived class inherits from one base class.

Simple and easy to understand.

Multiple Inheritance:

One derived class inherits from more than one base class.

Useful to combine features from multiple sources.

Can lead to ambiguity if two base classes have the same member (solved by virtual inheritance).

Multilevel Inheritance:

A class is derived from another derived class.

Forms a chain of inheritance, e.g., Grandparent → Parent → Child.

Hierarchical Inheritance:

Multiple derived classes inherit from a single base class.

Example: Vehicle → Car, Truck, Bus.

Hybrid Inheritance:

Combination of two or more types of inheritance (single, multiple, multilevel, hierarchical).

Powerful but can become complex.

4. Access Specifiers and Inheritance

Inheritance also depends on access specifiers: public, protected, private. They determine which members of the base class are accessible in the derived class:

Public Inheritance:

Public members remain public, protected members remain protected.

Protected Inheritance:

Public and protected members of the base become protected in the derived class.

Private Inheritance:

Public and protected members of the base become private in the derived class.

Private members of the base class are never inherited, regardless of the type of inheritance.

5. Advantages of Inheritance

Code Reuse: Derived classes use base class features without rewriting them.

Reduced Redundancy: Common functionality is written only once.

Ease of Maintenance: Updates in base class automatically reflect in derived classes.

Real-world Modeling: Helps represent real-world hierarchical relationships.

Supports Polymorphism: Enables runtime behavior changes via overriding.

6. Limitations of Inheritance

Tight Coupling: Changes in the base class may unintentionally affect derived classes.

Complexity: Deep or multiple inheritance can make the program harder to understand.

Implementation Overhead: Multiple layers may increase runtime or memory usage slightly.

Potential for Errors: Poorly designed inheritance structures can cause unexpected behavior or ambiguity.

7. Key Points

Inheritance creates an “is-a” relationship between classes.

Base class members can be accessed by derived classes depending on access specifiers.



NOTE-Java does not support class-based multiple or hybrid inheritance but allows it through interfaces, while C++ fully supports all inheritance typ
WHY Reason Java doesn’t support class-based multiple inheritance

Diamond Problem:
In multiple inheritance, if two base classes have the same method, the compiler may not know which one to use.
This creates ambiguity, called the diamond problem.

Simpler Design:
Java avoids this complexity by allowing only single inheritance for classes.
Multiple inheritance can still be achieved safely using interfaces.

Can be combined with polymorphism using virtual functions.

Proper design is essential to avoid complexity or ambiguities, especially in multiple or hybrid inheritance.
