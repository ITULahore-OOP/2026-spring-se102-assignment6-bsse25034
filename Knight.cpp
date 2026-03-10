#include "Knight.h"
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================

    Knight :: Knight(string hN,int h,int bP,int aR,int cB): Warrior( hN, h , bP, aR ){
        chargeBonus=cB;
    }
  Knight ::  ~Knight(){

    }


 //===================================
//        GETTER FUNCTIONS
//===================================

int Knight :: getBonus(){
    return chargeBonus;

}


 //===================================
//        SETTER FUNCTIONS
//===================================
void Knight :: setBonus(int bonus){
  chargeBonus=bonus;
}


 //===================================
//            FUNCTIONS
//===================================

int Knight :: calculateBurstDamage(){
    return getPower()+chargeBonus;

}