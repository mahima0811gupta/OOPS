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