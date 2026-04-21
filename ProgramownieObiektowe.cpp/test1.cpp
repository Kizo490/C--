#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
    
    protected:
    string first;
    string last;

    
    public:
    Person(string first, string last): first(first), last(last){}
    Person() = default;

    void setFirstName(string first){
        this->first = first;
    }
    void setLastName(string last){
        this->last = last;
    }
    string getName(){
        return first + " " + last;
    }
    void printFullName(){
        cout << first << " " << last << endl;
    }
    virtual void printInfo() {
        cout << "first name: " << first << endl;
        cout << "last  name: " << last << endl;
    }
    static void printPeople(vector<Person*>people){
        for(auto person: people){
        person->printInfo();
    }
    }
};

class Employee : public Person{
    string department;
    public:
       Employee(string firstName, string lastName, string department ): Person(firstName, lastName), department(department){}
       string getDepartment(){
            return department;
       }
       void setDepartment(string department){
            this->department = department;
       }
    void printInfo() override{
        cout << "first name: " << first << endl;
        cout << "last  name: " << last << endl;
        cout << "department: " << department << endl;
    }
};



int main(){
    vector<Person*> people;
    Person p("Stephan", "Papryczka");
    Employee e("first", "last", "sales");

    people.push_back(&p);
    people.push_back(&e);

    Person::printPeople(people);

    Person::printPeople(people);

    Person::printPeople(people);

   

    
    
  
    
   

// klasa – opisuje strukturę
// obiekt – konkretny przykład tej struktury (instancja)
// instancja – inna nazwa obiektu
// tworzenie instancji – tworzenie obiektu na podstawie klasy
// składowe danych – zmienne
// metody – funkcje
// klasa bazowa (rodzic) – z niej się dziedziczy
// klasa pochodna (dziecko) – dziedziczy po klasie bazowej

// abstrakcja – koncepcja polegająca na ukrywaniu złożonych szczegółów
// enkapsulacja – udostępnianie dostępu do prywatnych danych tylko przez kontrolowane publiczne interfejsy
// dziedziczenie – możliwość tworzenia klas pochodnych, które dziedziczą właściwości po klasach bazowych
// polimorfizm – możliwość traktowania różnych obiektów jako obiektów ich klasy bazowej
    return 0;
}