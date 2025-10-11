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
