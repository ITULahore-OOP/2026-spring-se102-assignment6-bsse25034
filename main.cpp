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

int main() {
    string name;
    cout<<"Enter Guild Name: ";
    cin>>name;
    Guild myGuild(name);  // or input from user

    int choice;
    do {

        cout <<YELLOW"\n\t\t\t================== GUILD MANAGEMENT =================\n"<<RESET;
        cout << "\t\t\t1. Add Warrior                2. Add Knight\n";
        cout << "\t\t\t3. Add Spellblade             4. Display Guild Stats\n";
        cout << "\t\t\t5. Calculate Guild Power      6.Enter 6 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;

            int health, basePower, armor;
            cout << "Enter Warrior name:";
            
            cin >> name ;
            cout<<"Enter Warrior Health: ";
            cin>>health;
            cout<<"Enter Warrior Power: ";
            cin>>basePower;
            cout<<"Enter Warrior Armor: ";
            cin>>armor;
            Warrior* w = new Warrior(name, health, basePower, armor);
            myGuild += w;
            delete w;
        }
         if (choice == 2) {
            string name;
            int health, basePower, armor, charge;
            string name;

            int health, basePower, armor;
            cout << "Enter Knight name:";
            
            cin >> name ;
            cout<<"Enter Knight Health: ";
            cin>>health;
            cout<<"Enter Knight Power: ";
            cin>>basePower;
            cout<<"Enter Knight Armor: ";
            cin>>armor;
            cout<<"Enter Knight Charge: ";
            cin>>charge;
            Knight* k = new Knight(name, health, basePower, armor, charge);
            myGuild += k;
            delete k;
        }
         if (choice == 3) {
            string name;
            int health, basePower, armor, mana, spell;
           
             string name;

            int health, basePower, armor;
            cout << "Enter SpellBlade name:";
            
            cin >> name ;
            cout<<"Enter SpellBlade Health: ";
            cin>>health;
            cout<<"Enter SpellBlade Power: ";
            cin>>basePower;
            cout<<"Enter SpellBlade Armor: ";
            cin>>armor;
            cout<<"Enter SpellBlade mana Poll: ";
            cin>>mana;
            cout<<"Enter SpellBlade Spell Power: ";
            cin>>spell;
            SpellBlade* s = new SpellBlade(name, health, basePower, armor, mana, spell);
            myGuild += s;
            delete s;
        }
         if (choice == 4) {
            myGuild.displayGuildStats();
        }
         if (choice == 5) {
            cout<<myGuild.calculateTotalGuildPower() << endl;
        }
         if (choice == 6) {

            cout << "Exiting program.\n";
        }
        if(choice>6||choice<0) {
            cout << "Invalid choice!\n";
            
        }

    } while (choice != 0);

    return 0;
}
