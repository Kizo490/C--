#include <iostream>

using namespace std;
//Adding 2 basic structures
struct Entry{
    char Name[20];
    char Last_Name[20];
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
        return;
    }

    for(int i = 0; i < base->current_number_of_records; i++){
        cout << "Name: " << base->array_of_records[i].Name << endl;
        cout << "Last Name: " << base->array_of_records[i].Last_Name << endl;
        cout << "Phone number: " << base->array_of_records[i].Phone_Number << endl;
    }
}
//Adding Entry
int Add_Entry(Base* base, Entry* New_Entry){
    if(base->current_number_of_records == base->maximum_number_of_records){
        Entry* New_Array = new Entry[base->maximum_number_of_records + 10];
        
        if(New_Array == nullptr){
            return -1;
        }

        for (int i = 0; i < base->current_number_of_records; i++){
            New_Array[i] = base->array_of_records[i];
        }

        delete[] base->array_of_records;

        base->array_of_records = New_Array;
        base->maximum_number_of_records += 10;
    }
    base->array_of_records[base->current_number_of_records] = *New_Entry;
    base->current_number_of_records++;

    return 0;
}

//Deleting an entry
void Delete_Entry(Base* base, int index){
    if(index < 0 || index >= base->current_number_of_records){
        return;
    }

    for(int i = index; i < base->current_number_of_records -1; i++){
        base->array_of_records[i] = base->array_of_records[i + 1];
    }

    base->current_number_of_records--;
}
//Main function
int main(){
    Base Book;
    Book.current_number_of_records = 0;
    Book.maximum_number_of_records = 0;
    Book.array_of_records = nullptr;

    Entry entry1 = {"Max", "Bryant", 145092587};
    Entry entry2 = {"Adam", "Maxwell", 498506391};
    Entry entry3 = {"Philipe", "Zielniski", 752098652};

    Add_Entry(&Book, &entry1);
    Add_Entry(&Book, &entry2);
    Add_Entry(&Book, &entry3);

    write_out_the_book(&Book);

    delete[] Book.array_of_records;

    return 0;
}