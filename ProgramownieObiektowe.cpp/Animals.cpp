#include <iostream>

using namespace std;

class Animal
{
    public:
    //Atrybuty
    string species;
    string name;
    int age;
    //Metody
    void add_animal()
    {
        cout << "ADDING NEW ANIMAL TO THE BASE: " << endl;
        cout << "Type species: " << endl;
        cin >> species;
         cout << "Type name: " << endl;
        cin >> name;
         cout << "Type age: " << endl;
        cin >> age;
    }

    void give_voice()
    {
        if(species=="cat")
        cout << name << age << "  years old" << ": Miauuu!";
        else if(species=="goat")
        cout << name << age << "  years old"  ": Beeeee!";
        else if(species=="cow")
        cout << name << age << "  years old"  ": MUUUU!";
        else
        cout << "Unknown species!" << endl;
    }
};

int main()
{
    Animal a1;
    a1.add_animal();
    a1.give_voice();

    

    return 0;
}
