#include "Car.h"
#include <iostream>
using namespace std;

int main() {

    Car::ustawLicznik(1);

    Car samochod1("Ford", 2005);
    Car samochod2("Peugeot", 2015);
    Car samochod3("Mazda", 2021);

    samochod1.danePojazdu();
    samochod2.danePojazdu();
    samochod3.danePojazdu();

    return 0;
}