#include"Hero.h"
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    Hero ::Hero(string hN,int h,int bP){
     heroName=hN;
     health=h;
     basePower=bP;


    }
    Hero ::~Hero(){

    }

 //===================================
//        GETTER FUNCTIONS
//===================================



string Hero ::  getName()const{

    return heroName;
}
int Hero :: getHealth()const{
return health;
}
int Hero :: getPower()const{
  return basePower;
}



//===================================
//        SETTER FUNCTIONS
//===================================


void Hero :: setName(string name){
   heroName=name;
}
void Hero :: setHealth(int hlth){
    health=hlth;

}
void Hero :: setPower(int bP){
    basePower=bP;

}




//===================================
//         FUNCTIONS
//===================================



void Hero :: takeDamage(int damage){
if(health>=0){
    damage-=health;
    return;
}
cout<<"\nHealth Cant be less than 0.";


}
 bool Hero :: operator >( const Hero &other)const{
    if(basePower >other.basePower ){
   return true;
    }
    return false;

 }
 int Hero:: operator +(const Hero &other) const {
    return health+other.health;

 }
