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