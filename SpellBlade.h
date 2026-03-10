#ifndef SpellBlade_H
#define SpellBlade_H
#include<iostream>
#include <string>
#include"MagicalEntity.h"
#include"Warrior.h"
using namespace std;
//===================================
//          INHERITED CLASS
//   FROM HERO AND MAGICAL ENTITY 
//===================================

class SpellBlade:public Warrior,MagicalEntity
{
private:
    /* data */
public:
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    SpellBlade(string hN,int h,int bP,int aR,int mP,int sP);
    ~SpellBlade();
    



 //===================================
//             FUNCTIONS
//===================================
int calculateHybridDamage();

};
#endif