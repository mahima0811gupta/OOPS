// for hiding data for security
/// binding data and function together
//encapulatsion -unit     testing

Encapsulation is the process of binding data (variables) and functions (methods) that operate on that data into a single unit, known as a class.
In simple words, encapsulation means wrapping data and code together so that the implementation details are hidden from the outside world.

🔹 Why is it called Data Hiding?
When we declare class variables as private, they cannot be accessed directly from outside the class.
The only way to access or modify them is through public methods (getters and setters).
This protects the data from unauthorized access or accidental modification.
Hence, encapsulation is also called data hiding, because it hides the internal data of an object from outside interference.

Key Benefits of Encapsulation
Benefit	Description
🔒 Data Protection	Prevents external access to sensitive data
⚙️ Controlled Access	Access is given only through public methods
🧠 Code Maintenance	Easier to change internal implementation without affecting external code
🧩 Modularity	Each class acts as an independent unit





  
  #include <iostream>
using namespace std;

class Person {
private:
    int age;          // hidden data

public:
    // set age
    void setAge(int a) {
        age = a;
    }

    // get age
    int getAge() {
        return age;
    }
};

int main() {
    Person p;

    p.setAge(20);          // set value
    cout << p.getAge();    // get value
}
