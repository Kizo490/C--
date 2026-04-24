#include <iostream>

using namespace std;
//Adding 2 basic structures
struct Entry{
    char Name;
    char Last_Name;
    long Phone_Number;
};

struct Base{
    int current_number_of_records;
    int maximum_number_of_records;
    Entry* array_of_records;
};
//Adding writing function
void write_out_the_book(Base* base){
    if (base->current_number_of_records == 0){
        cout << "Base is empty!" << endl;
    }

    for(int i = 0; i < base->current_number_of_records; i++){
        cout << "Name: " << base->current_number_of_records[i].Name << endl;
        cout << "Last Name: " << base->current_number_of_records[i].Last_Name << endl;
        cout << "Phone number: " << base->current_number_of_records[i].Phone_Number << endl;
    }
}

int main(){

}