#include "Wektor.hpp"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;


Wektor::Wektor(const double* arr, size_t size) : rozmiar(size) {
    if (size == 0) {
        wektor = nullptr;
        return;
    }

    wektor = new double[rozmiar];
    for (size_t i = 0; i < rozmiar; ++i) {
        wektor[i] = arr[i];
    }
}

Wektor::Wektor(size_t size, double val) : rozmiar(size) {
    if (size == 0) {
        wektor = nullptr;
        return;
    }

    wektor = new double[rozmiar];
    for (size_t i = 0; i < rozmiar; ++i) {
        wektor[i] = val;
    }
}

Wektor::Wektor(const Wektor& other)
    : Wektor(other.wektor, other.rozmiar) {}

Wektor::Wektor(const initializer_list<double>& list)
    : rozmiar(list.size()) {

    if (rozmiar == 0) {
        wektor = nullptr;
        return;
    }

    wektor = new double[rozmiar];

    size_t i = 0;
    for (auto it = list.begin(); it != list.end(); ++it) {
        wektor[i++] = *it;
    }
}

Wektor::~Wektor() {
    delete[] wektor;
}


double Wektor::get_elem(size_t idx) const {
    return wektor[idx];
}

void Wektor::set_elem(double val, size_t idx) {
    wektor[idx] = val;
}

size_t Wektor::size() const {
    return rozmiar;
}

double* Wektor::begin() {
    return wektor;
}

double* Wektor::end() {
    return wektor + rozmiar;
}

const double* Wektor::begin() const {
    return wektor;
}

const double* Wektor::end() const {
    return wektor + rozmiar;
}

double Wektor::norm() const {
    double suma = 0.0;
    for (size_t i = 0; i < rozmiar; ++i) {
        suma += wektor[i] * wektor[i];
    }
    return sqrt(suma);
}

string Wektor::to_string() const {
    ostringstream oss;
    for (double val : *this) {
        oss << val << " ";
    }
    return oss.str();
}

void wypisz_wektor_obiekt(const Wektor& w) {
    for (double val : w) {
        cout << val << " ";
    }
    cout << endl;
}