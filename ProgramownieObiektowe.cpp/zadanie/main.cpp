#include <iostream>
#include "Wektor.hpp"

using namespace std;

int main() {
    size_t rozmiar = 5;
    double tablica[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    Wektor w(tablica, rozmiar);

    cout << "Poczatkowy wektor: ";
    wypisz_wektor_obiekt(w);

    w.set_elem(7.5, 2);

    cout << "Wektor po modyfikacji: " << w.to_string() << endl;

    cout << "Rozmiar wektora: " << w.size() << endl;
    cout << "Norma wektora: " << w.norm() << endl;


    Wektor w2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    cout << "Wektor w2: ";
    wypisz_wektor_obiekt(w2);

    Wektor w3(w2);
    cout << "Wektor w3 (kopia): " << w3.to_string() << endl;

    Wektor w4;
    cout << "Wektor w4 (pusty): ";
    wypisz_wektor_obiekt(w4);

    return 0;
}