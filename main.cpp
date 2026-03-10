#include <iostream>
#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "SpellBlade.h"

using namespace std;
//=================
//   ANSI COLORS
//=================
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define LIGHTBLUE "\033[94m"

int main()
{
    string name;
    cout << "Enter Guild Name: ";
    getline(cin, name);
    Guild myGuild(name); // or input from user
//CLASS OBJECTS
    Knight *k;
    Warrior *w;
    SpellBlade *s;
    int choice;
    do
    {

        cout << YELLOW "\n\t\t\t\t\t================ GUILD MANAGEMENT =====================\n"
             << RESET;
        cout << GREEN "\t\t\t\t\t1. Add Warrior                    2. Add Knight\n";
        cout << "\t\t\t\t\t3. Add Spellblade                 4. Display Guild Stats\n";
        cout << "\t\t\t\t\t5. Calculate Guild Power          6. Enter 0 to Exit\n"
             << RESET;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;

            int health, basePower, armor;
            cout << "Enter Warrior name:";

            cin >> name;
            cout << "Enter Warrior Health: ";
            cin >> health;
            cout << "Enter Warrior Power: ";
            cin >> basePower;
            cout << "Enter Warrior Armor: ";
            cin >> armor;
            w = new Warrior(name, health, basePower, armor);
            myGuild += w;
        }
        if (choice == 2)
        {
            string name;
            int health, basePower, armor, charge;

            cout << "Enter Knight name:";

            cin >> name;
            cout << "Enter Knight Health: ";
            cin >> health;
            cout << "Enter Knight Power: ";
            cin >> basePower;
            cout << "Enter Knight Armor: ";
            cin >> armor;
            cout << "Enter Knight Charge: ";
            cin >> charge;
            k = new Knight(name, health, basePower, armor, charge);
            myGuild += k;
        }
        if (choice == 3)
        {
            string name;
            int health, basePower, armor, mana, spell;

            cout << "Enter SpellBlade name:";

            cin >> name;
            cout << "Enter SpellBlade Health: ";
            cin >> health;
            cout << "Enter SpellBlade Power: ";
            cin >> basePower;
            cout << "Enter SpellBlade Armor: ";
            cin >> armor;
            cout << "Enter SpellBlade mana Poll: ";
            cin >> mana;
            cout << "Enter SpellBlade Spell Power: ";
            cin >> spell;
            s = new SpellBlade(name, health, basePower, armor, mana, spell);
            myGuild += s;
        }
        if (choice == 4)
        {
            myGuild.displayGuildStats();
        }
        if (choice == 5)
        {
            cout << "Total Guild Power is: " << YELLOW << myGuild.calculateTotalGuildPower() << endl
                 << RESET;
        }
        if (choice == 0)
        {

            cout << YELLOW "Programs End Successfully ----\n"
                 << RESET;
        }
        if (choice > 5 || choice < 0)
        {
            cout << RED "Invalid choice!\n"
                 << RESET;
        }

    } while (choice != 0);
    
    return 0;
}
