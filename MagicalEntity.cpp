#include"MagicalEntity.h"
 //===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    MagicalEntity:: MagicalEntity(int mP,int sP){

        manaPool=mP;
        spellPower=sP;

    }
    MagicalEntity:: ~MagicalEntity(){

    }


     //===================================
//        GETTER FUNCTIONS
//===================================

int  MagicalEntity:: getMana()const{
    return manaPool;

}
int MagicalEntity:: getSpellPower()const{
   return spellPower;
}

//===================================
//        SETTER FUNCTIONS
//===================================
void MagicalEntity:: setMana(int mana){
  manaPool=mana;
}
void MagicalEntity:: setSpellPower(int spell){
 spellPower=spell;
}



