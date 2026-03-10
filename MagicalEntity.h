#ifndef MagicalEntity_H
#define MagicalEntity_H
#include<iostream>
#include<string>
using namespace std;
//===================================
//           DERIVED CLASS 
//===================================
class MagicalEntity
{
private:

int manaPool;
int spellPower;
    /* data */
public:
 //===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    MagicalEntity(int mP,int sP);
    ~MagicalEntity();


     //===================================
//        GETTER FUNCTIONS
//===================================

int getMana()const;
int getSpellPower()const;

//===================================
//        SETTER FUNCTIONS
//===================================
void setMana(int mana);
void setSpellPower(int spell);








};
#endif