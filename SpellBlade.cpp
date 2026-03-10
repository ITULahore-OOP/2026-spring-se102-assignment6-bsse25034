#include"SpellBlade.h"
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    SpellBlade :: SpellBlade(string hN,int h,int bP,int aR,int mP,int sP): Warrior( hN, h , bP, aR ),MagicalEntity(mP,sP){

    }
  SpellBlade ::  ~SpellBlade(){

    }
    



 //===================================
//             FUNCTIONS
//===================================
int SpellBlade :: calculateHybridDamage(){
    return getPower()+getSpellPower();

}