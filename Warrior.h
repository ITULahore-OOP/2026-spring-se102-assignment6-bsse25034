#ifndef Warrior_H
#define Warrior_H
#include<iostream>
#include<string>
#include"Hero.h"
using namespace std;
//===================================
//           DERIVED CLASS 
//===================================
class Warrior:public Hero
{
private:
int armorRating;


    /* data */
public:
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    Warrior(string hN,int h ,int bP,int aR );
    ~Warrior();
 //===================================
//        GETTER FUNCTIONS
//===================================

int getArmor();



//===================================
//        SETTER FUNCTIONS
//===================================

void setArmor(int aR);



 //===================================
//            FUNCTIONS
//===================================
int calculateEffectiveHealth()const;

};

#endif