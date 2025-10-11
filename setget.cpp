
// Getter and Setter Functions
// When data members are declared as private (which is good practice for encapsulation), you cannot access them directly from outside the class. Getter and Setter functions (also known as accessor and mutator methods) provide a controlled way to interact with private data members.

// Getter (Accessor): A function that returns the value of a private data member.

// Setter (Mutator): A function that sets or modifies the value of a private data member. Setters are useful for implementing validation logic or conditions before modifying the data.

// Code Example: Getters and Setters

// (Refer to the Hero class definition in the Access Modifiers section for getHealth(), setHealth(), getLevel(), setLevel(), and setName() implementations.)

#include<iostream>
using namespace std;
class Hero{
   //properties
   private:
   int health;
   char level;
  public:
  int getHealth(){
    return health;
  }

  int getLevel(){
    return level;
  }

  void setHealth(int h){  //koi bhi condition lga ske set se
    health=h;
  }
  void setHealth(char l){
    level=l;
  }
};

int main(){
    //creating object
    Hero ram;
   cout<<"ram health is"<<ram.getHealth()<<endl;
  
    ram.setHealth(60);
    cout<<"ram health is"<<ram.getHealth()<<endl;
    
    


}
