#include"Warrior.h"
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    Warrior :: Warrior(string hN,int h ,int bP,int aR ):Hero(hN, h, bP){
        armorRating=aR;
        
    }
    Warrior ::~Warrior(){
        
    }
 //===================================
//        GETTER FUNCTIONS
//===================================

int Warrior :: getArmor(){
    return armorRating;
    
}



//===================================
//        SETTER FUNCTIONS
//===================================

void Warrior :: setArmor(int aR){

    armorRating=aR;
    
}



 //===================================
//            FUNCTIONS
//===================================
int Warrior :: calculateEffectiveHealth()const{
    return getHealth() +(armorRating*2);
    
}
