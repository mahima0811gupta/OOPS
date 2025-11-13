#include<iostream>
using namespace std;
class Hero{
   //properties
   public:
   int health;
   char level;

  Hero( int health){
    ///this keyword is used to refer to the current object
  
   this->health=health;
   ///here this->health is used to refer to the health of the current object
   cout<<"Parameterized Constructor is called"<<endl;
  }

  //craeting copy constructor
  Hero(Hero &temp){
    cout<<"copy constructor is called"<<endl;
    this->health=temp.health;
    this->level=temp.level;
  }

  void print() {
    cout << "Health: " << health << endl;
    cout << "Level: " << level << endl;
  }
};



int main(){
    //creating object
    Hero ram(10);
    ram.print();

    Hero raju(ram); //copy constructor
   raju.print();
}





eg #include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    // Normal constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;   // copying value
    }

    void show() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1(20);   // normal object
    Student s2 = s1;  // copy constructor is called

    s1.show();
    s2.show();
}
output
Age = 20
Age = 20
