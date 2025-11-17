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

What are some advantages of using OOPs?
Easier to manage complex programs — OOP helps in breaking big problems into smaller objects.

Code reusability — We can reuse existing classes using inheritance, which saves time and reduces repetition.

Data hiding — Using encapsulation, OOP keeps data safe from unwanted access.

Abstraction — It hides unnecessary details and only shows what’s needed.

Flexibility — With polymorphism, the same function can work in different ways.

Easy maintenance — Since code is modular, fixing or updating it becomes simple.

Bottom-up approach — We first create small classes and objects, then combine them to build bigger systems.

Q7. Why is OOPs so popular?
Answer:
OOPs is popular because it makes programming simple, organized, and closer to real life.
It helps developers write, understand, and maintain large programs easily.
The main reason for its popularity is its four main features:
Encapsulation – hiding data
Abstraction – showing only important details
Inheritance – reusing code
Polymorphism – using one interface for different actions
These features make OOP powerful, reusable, and easier to manage, which is why most modern languages like C++, Java, and Python use it.

What are some other programming paradigms other than OOPs?
A programming paradigm is a way to classify programming languages based on how they solve problems.
There are mainly two types of paradigms:

🔹 1. Imperative Programming Paradigm
It focuses on how a program works — meaning it defines step-by-step instructions to change the program’s state.
Examples:
Procedural Programming: Uses functions or procedures (like in C).
Object-Oriented Programming (OOP): Uses objects that hold data and behavior (like in C++, Java).
Parallel Programming: Runs multiple tasks at the same time.

🔹 2. Declarative Programming Paradigm
It focuses on what the program should accomplish — not how to do it.
Examples:
Logical Programming: Based on facts and rules (e.g., Prolog).
Functional Programming: Uses functions without changing data (e.g., Haskell, Lisp).
Database Programming: Deals with data management using queries (e.g., SQL).

🧠 In simple words:
Imperative programming tells how to do a task (step by step), while declarative programming tells what to do without describing the steps.

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
Yes, inheritance is powerful but has some limitations:

Tight Coupling:
Base and derived classes are closely linked.
Changing the base class may require changes in derived classes.
Complexity:
Large inheritance hierarchies can be hard to understand and maintain.
Mistakes in design can lead to unexpected errors.
Performance Overhead:
Accessing members through multiple class levels may slow down execution.
Implementation Challenges:
Multiple or deep inheritance can make the code more complex and error-prone.


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


| **Aspect**                | **Abstraction**                                                                                                        | **Encapsulation**                                                                                                                              |
| ------------------------- | ---------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
| **Definition**            | Abstraction is the process of **hiding unnecessary details** and showing only the **essential features** of an object. | Encapsulation is the process of **binding data members and methods** into a **single unit (class)** to protect data from outside interference. |
| **Purpose**               | To **simplify** complex systems by showing only what’s necessary.                                                      | To **secure** data and prevent unauthorized access.                                                                                            |
| **Implementation**        | Achieved through **abstract classes** and **interfaces**.                                                              | Achieved using **access modifiers** (`private`, `protected`, `public`).                                                                        |
| **Focus**                 | Focuses on **what** an object does.                                                                                    | Focuses on **how** data and methods are combined together.                                                                                     |
| **Problem Solving Level** | Solved at the **design or interface level**.                                                                           | Solved at the **implementation level**.                                                                                                        |
| **Example**               | Showing only the “Drive” method of a car class without explaining how the engine works.                                | Wrapping the engine details (data + methods) inside a `Car` class to keep it secure from direct access.           



What are some major Object Oriented Programming languages?
The programming languages that use and follow the Object-Oriented Programming paradigm or OOPs, are known as Object-Oriented Programming languages. Some of the major Object-Oriented Programming languages include:

Java
C++
Javascript
Python
PHP
And many more.

3. What are some other programming paradigms other than OOPs?
Programming paradigms refers to the method of classification of programming languages based on their features. There are mainly two types of Programming Paradigms:

Imperative Programming Paradigm
Declarative Programming Paradigm
Now, these paradigms can be further classified based:

1. Imperative Programming Paradigm: Imperative programming focuses on HOW to execute program logic and defines control flow as statements that change a program state. This can be further classified as:
a) Procedural Programming Paradigm: Procedural programming specifies the steps a program must take to reach the desired state, usually read in order from top to bottom.
b) Object-Oriented Programming or OOP: Object-oriented programming (OOP) organizes programs as objects, that contain some data and have some behavior.
c) Parallel Programming: Parallel programming paradigm breaks a task into subtasks and focuses on executing them simultaneously at the same time.

2. Declarative Programming Paradigm: Declarative programming focuses on WHAT to execute and defines program logic, but not a detailed control flow. Declarative paradigm can be further classified into:
a) Logical Programming Paradigm: Logical programming paradigm is based on formal logic, which refers to a set of sentences expressing facts and rules about how to solve a problem
b) Functional Programming Paradigm: Functional programming is a programming paradigm where programs are constructed by applying and composing functions.
c) Database Programming Paradigm: Database programming model is used to manage data and information structured as fields, records, and files.

 What are the main features of OOPs?
OOPs or Object Oriented Programming mainly comprises of the below four features, and make sure you don't miss any of these:
Inheritance
Encapsulation
Polymorphism
Data Abstraction

What is a subclass?
The subclass is a part of Inheritance. The subclass is an entity, which inherits from another class. It is also known as the child class.

5. Define a superclass?
Superclass is also a part of Inheritance. The superclass is an entity, which allows subclasses or child classes to inherit from itself.

How is data abstraction accomplished?
Data abstraction is accomplished with the help of abstract methods or abstract classe

Q. What is meant by Structured Programming?
Structured programming means writing clean, step-by-step, and well-organized code using loops, conditions, and functions so it’s easier to understand and manage.

QStructured Programming vs Object-Oriented Programming (OOPs)
Structured programming focuses on functions and logic, while OOP focuses on objects and data.
In structured programming, we use a top-down approach, but in OOP we use a bottom-up approach.
OOP provides better code reusability, security, and flexibility using concepts like encapsulation, inheritance, and polymorphism.


How is an abstract class different from an interface?
| Feature                        | **Abstract Class**                                                                                   | **Interface**                                            |
| ------------------------------ | ---------------------------------------------------------------------------------------------------- | -------------------------------------------------------- |
| **Methods**                    | Can have both **abstract** and **non-abstract** methods                                              | Can only have **abstract methods** (method declarations) |
| **Implementation Requirement** | Subclass may or must implement abstract methods; if subclass is abstract, it may skip implementation | Subclass **must implement all methods**                  |
| **Object Creation**            | Cannot create objects                                                                                | Cannot create objects                                    |
| **Use Case**                   | When some common implementation is shared     | When you only want to define a **contract** for classes  |

<img width="664" height="705" alt="image" src="https://github.com/user-attachments/assets/3a87af22-3164-4a61-9e3f-6352e6d456b8" />



Q. How much memory does a class occupy?

Answer:

A class itself does not occupy memory because it is just a blueprint.
Memory is only allocated when objects of the class are created, as the objects hold the class’s data and methods.

Q. Is it always necessary to create objects from a class?
Not always.
If a class has non-static methods or variables, you need an object to use them.
If a class has static methods or variables, you can use them directly with the class name without creating an object.

Q Explain Inheritance with an example
Inheritance allows a class to reuse properties and methods of another class, helping in code reuse.
For example, a Vehicle class can have common features like steering, brakes, and accelerator, which are inherited by Car, Truck, and Bus.
This way, each vehicle class can have its own specific features without rewriting common code.


q.what is Abstraction 
Abstraction is hiding unnecessary details and showing only the important features.
It lets users focus on what an object does, not how it works internally.
Example: Driving a car — you only need to know how to use it, not how the engine works


What is an Exception?
An exception is a runtime error or special event that occurs during program execution, which can stop the program if not handled.
Example: Dividing by zero, or invalid user input.

Q15. What is Exception Handling?
Exception handling is the mechanism to catch and handle runtime errors so the program doesn’t crash.
It defines what to do when an error occurs, usually using try-catch blocks.

Purpose of Exception Handling
To catch and handle errors so the program does not crash.
Ensures graceful error recovery and resource management.


1. try-catch Block (C++)

Wrap the code that may cause an exception in a try block.

Handle it in a catch block.

#include <iostream>
using namespace std;

int main() {
    try {
        int x = 10, y = 0;
        if (y == 0)
            throw "Division by zero!";
        int z = x / y;
    } catch (const char* e) {
        cout << "Error: " << e << endl;
    }
    return 0;
}

2. throw Keyword
Used to manually throw an exception in C++.
Can throw int, string, or any object.

throw 404;           // throwing an integer
throw "Error";       // throwing a string

3. catch Keyword
Catches exceptions thrown by throw.
Can catch specific types or a general type using catch(...).

catch (int e) { ... }
catch (const char* e) { ... }
catch (...) { ... }  // catches any exception

4. finally
C++ does NOT have a finally block like Java.
Instead, you can use destructors or RAII (Resource Acquisition Is Initialization) to ensure cleanup.


| Keyword           | Purpose                                  |
| ----------------- | ---------------------------------------- |
| `try`             | Enclose code that may throw an exception |
| `catch`           | Handle exceptions thrown in try block    |
| `throw`           | Raise an exception manually              |
| RAII / Destructor | Cleanup resources (replaces `finally`)   |


Q6. What is Garbage Collection in OOPs?

Answer:
Garbage collection is the process of automatically freeing memory used by objects that are no longer needed.
It prevents memory leaks and ensures efficient memory management in object-oriented programs.

Example: In Java, objects that are no longer referenced are automatically removed by the Garbage Collector.
garbage collection helps manage memory by cleaning up unused objects so the program runs efficiently.

Q. Can we run a Java application without OOPs?
No, Java is fully object-oriented, so every Java program relies on classes and objects.
In contrast, C++ can run without OOPs, because it also supports procedural programming like C.



What is the difference between a structure and a class in C++?
The structure is also a user-defined datatype in C++ similar to the class with the following differences:
The major difference between a structure and a class is that in a structure, the members are set to public by default while in a class, members are private by default.
The other difference is that we use struct for declaring structure and class for declaring a class in C++.

Q.Can we overload the constructor in a class?
Yes We can overload the constructor in a class in Java. Constructor Overloading is done when we want constructor with different constructor with different parameter (Number and Type).

QCan we overload the destructor in a class?
No, a destructor cannot be overloaded in a class. There can only be one destructor present in a class.
