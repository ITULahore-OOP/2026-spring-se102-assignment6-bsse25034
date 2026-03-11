#include "Guild.h"

//===================================
//     CONSTRUCTOR AND DESTRUCTOR
//===================================

Guild ::Guild(string gN)
{

    guildName = gN;
}
Guild ::~Guild()
{
    for (int i = 0; i < memberCount; i++)
    {
        roaster[i] = nullptr;
    }
    cout << "The guild " << guildName << " has been disbanded!\n";
}
//===================================
//           FUNCTIONS
//===================================

int Guild ::calculateTotalGuildPower()
{
    int totalPower = 0;
    for (int i = 0; i < memberCount; i++)
    {
        totalPower += roaster[i]->getPower();
    }
    return totalPower;
}
void Guild ::displayGuildStats()
{

    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}
void Guild ::operator+=(Hero *newHero)
{
    if (memberCount < 15)
    {
        roaster[memberCount] = newHero;
        memberCount++;
        return;
    }
    cout << "Guild is at full capacity!\n";
}
ostream &operator<<(ostream &os, const Guild &g)
{
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;
    for (int i = 0; i < g.memberCount; i++)
    {

        os << "- " << g.roaster[i]->getName() << " (Power: " << g.roaster[i]->getPower() << ")" << endl;
    }

    return os;
}