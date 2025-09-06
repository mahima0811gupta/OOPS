#include<iostream>
using namespace std;
class Hero{
   //properties
   public:
   int health;
   char level;

  Hero( int health){
    ///this keyword is used to refer to the current object
    cout<<"this->"<<this<<endl;
   this->health=health;
   ///here this->health is used to refer to the health of the current object
   cout<<"Parameterized Constructor is called"<<endl;
  }

  void print() {
    cout << "Health: " << health << endl;
    cout << "Level: " << level << endl;
  }
};



int main(){
    //creating object
    Hero ram(10);
    cout<<"address of ram is "<<&ram<<endl;
    ram.print();
   
}