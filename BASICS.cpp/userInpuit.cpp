#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){

    string color, pluralNoun, Kotek;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a kotek: ";
    getline(cin, Kotek);



    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << Kotek << endl;
    
    
    
    return 0;
}
