ques when we use dot and when ->
ans-Use . when you have an object.
Use -> when you have a pointer to an object.



What is OOP?
Object-Oriented Programming (OOP) is a programming technique where the entire program structure revolves around objects. The primary goal of OOP is to bring programs closer 
to the real world, which in turn enhances readability, manageability, and extensibility of the code.

What is an Object?
An object is a real-world entity that possesses two key characteristics:

State/Properties (Data Members): These describe the attributes of an object.

Behavior (Functions/Methods): These describe the actions an object can perform.

Real-world examples:
Camera: Properties (brand, model, resolution), Behaviors (capture photo, record video).
Microphone: Properties (type, sensitivity), Behaviors (record audio, mute).

Programming example (Hero object in a game):
Properties: name (Paul), health (70%), level ('A').
Behaviors: attack(), defend(), dance().


What is a Class?
A class is a user-defined data type. Think of it as a blueprint or a template for creating objects. It defines the properties (data members) and
behaviors (member functions) that all objects of that class will have. Just like int, string, or char are built-in data types, you can create your own custom data type using a class.

An object is an instance of a class. When you create an object, you are essentially creating a concrete entity based on the blueprint defined by the class.
Does every virtual function need to be always overridden?
No, It is not always mandatory to redefine a virtual function. It can be used as it is in the base class.

3. Can we have a constructor as Virtual?
Constructors cannot be virtual because they need to be defined in the class.

what is const keyword
The const keyword stands for constant — it is used to make variables, pointers, objects, or function parameters unmodifiable.
Once a const variable is initialized, its value cannot be changed.

3. How much memory does a class occupy?

Classes do not consume any memory. They are just a blueprint based on which objects are created. When objects are created,
they initialize the class members and methods and therefore consume memory.

 
4. Are there any limitations of Inheritance?
Yes, with more powers comes more complications. Inheritance is a very powerful feature in OOPs, but it also has limitations.
Inheritance needs more time to process, as it needs to navigate through multiple classes for its implementation. Also, the classes involved in Inheritance -
the base class and the child class, are very tightly coupled together. So if one needs to make some changes, they might need to do nested changes in both classes.
 Inheritance might be complex for implementation, as well. So if not correctly implemented, this might lead to unexpected errors or incorrect outputs.


6. What is the difference between overloading and overriding?
Overloading is a compile-time polymorphism feature in which an entity has multiple implementations with the same name—for example, Method overloading and Operator overloading.
Whereas Overriding is a runtime polymorphism feature in which an entity has the same name, but its implementation changes during execution. For example, Method overriding.

 

6. What are the various types of inheritance?
The various types of inheritance include:
             Single inheritance
             Multiple inheritances
             Multi-level inheritance
             Hierarchical inheritance
             Hybrid inheritance

 

7. What are the advantages of Polymorphism?

There are the following advantages of polymorphism in C++:
a. Using polymorphism, we can achieve flexibility in our code because we can perform various operations by using methods with the same names according to requirements.
b. The main benefit of using polymorphism is when we can provide implementation to an abstract base class or an interface.

 

8. What are the differences between Polymorphism and Inheritance in C++?
The differences between polymorphism and inheritance in C++ are as follows:
a. Inheritance represents the parent-child relationship between two classes. On the other hand, polymorphism takes
advantage of that relationship to make the program more dynamic.
b. Inheritance helps in code reusability in child class by inheriting behavior from the parent class. On the other hand,
polymorphism enables child class to redefine already defined behavior inside parent class.
Without polymorphism, a child class can’t execute its own behavior.
