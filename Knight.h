#ifndef Knight_H
#define Knight_H
#include <iostream>
#include<string>
#include"Warrior.h"
using namespace std;
//===================================
//           DERIVED CLASS 
//===================================
class Knight:public Warrior
{
private:
int chargeBonus;
    /* data */
public:
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================

    Knight(string hN,int h,int bP,int aR,int cB);
    ~Knight();


 //===================================
//        GETTER FUNCTIONS
//===================================

int getBonus();


 //===================================
//        SETTER FUNCTIONS
//===================================
void setBonus(int bonus);


 //===================================
//            FUNCTIONS
//===================================

int calculateBurstDamage();
};


#endif