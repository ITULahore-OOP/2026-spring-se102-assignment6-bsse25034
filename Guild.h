#ifndef Guild_H
#define Guild_H
#include <iostream>
#include <string>
#include"Hero.h"
using namespace std;
//===================================
//           DERIVED CLASS
//===================================
class Guild
{
private:
    string guildName;
    Hero *roaster[15];
    int memberCount=0;
    /* data */
public:
    //===================================
    //     CONSTRUCTOR AND DESTRUCTOR
    //===================================

    Guild(string gN);
    ~Guild();
    //===================================
    //   GETTER FUNCTIONS
    //===================================
    string getGuildName()const;
    int getMemberCount()const;
     //===================================
    //   SETTER FUNCTIONS
    //===================================
    void setGuildName(string name);
    void setMemberCount( int count);
    


    //===================================
    //           FUNCTIONS
    //===================================

    int calculateTotalGuildPower();
    void displayGuildStats();
    void operator+=(Hero*newHero);
    friend ostream &operator<<(ostream &os, const Guild &g);
};

#endif