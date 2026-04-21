#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
private:
    string marka;
    int rokProdukcji;
    const int VIN;
    static int licznik;

public:

    Car(string m, int r) : VIN(licznik) {
        marka = m;
        rokProdukcji = r;
        licznik++;
    }

    void danePojazdu() const {
        cout << "Marka: " << marka << endl;
        cout << "Rok Produkcji: " << rokProdukcji << endl;
        cout << "Numer VIN: " << VIN << endl;
        cout << "Liczba wyprodukowanych samochodow: " << licznik << endl;
        cout << "-----------------------------" << endl;
    }

    static void ustawLicznik(int wartosc) {
        licznik = wartosc;
    }
};

int Car::licznik = 0;

#endif