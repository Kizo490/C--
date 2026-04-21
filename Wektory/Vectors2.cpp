#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> Hero_equipment;

    Hero_equipment.push_back("Miecz");
    Hero_equipment.push_back("Tarcza");
    Hero_equipment.push_back("Zloto");

    for(int i = 0; i < Hero_equipment.size(); i++){
        cout << "Item: " << Hero_equipment[i] << endl;
    }

    return 0;
}