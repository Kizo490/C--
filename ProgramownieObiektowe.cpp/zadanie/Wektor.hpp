#ifndef WEKTOR_HPP
#define WEKTOR_HPP

#include <cstddef>
#include <string>
#include <initializer_list>

using namespace std;

class Wektor {
private:
    double* wektor;
    size_t rozmiar;

public:

    Wektor(const double* arr, size_t size);
    Wektor(size_t size = 0, double val = 0.0);
    Wektor(const Wektor& other);
    Wektor(const initializer_list<double>& list);

  
    ~Wektor();

    double get_elem(size_t idx) const;
    void set_elem(double val, size_t idx);
    size_t size() const;

    double* begin();
    double* end();
    const double* begin() const;
    const double* end() const;

    double norm() const;
    string to_string() const;
};

void wypisz_wektor_obiekt(const Wektor& w);

#endif