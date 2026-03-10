#ifndef Hero_H
#define Hero_H
#include<iostream>
#include <string>
using namespace std;
//===================================
//           BASE CLASS 
//===================================
class Hero
{
private:
string heroName;
int health;
int basePower;
    /* data */
public:
//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================
    Hero(string hN,int h,int bP);
    ~Hero();

 //===================================
//        GETTER FUNCTIONS
//===================================



string getName()const;
int getHealth()const;
int getPower()const;



//===================================
//        SETTER FUNCTIONS
//===================================


void setName(string name);
void setHealth(int hlth);
void setPower(int bP);




//===================================
//         FUNCTIONS
//===================================



void takeDamage(int damage);
 bool operator >( const Hero &other)const;
 int  operator +(const Hero &other) const;

};
#endif
