#include <iostream>

using namespace std;
// Adding function which prints the vector
void print_vector(const double* vector,  int size){
    for(int i = 0; i < size; i++){
        cout << vector[i] << endl;
    }
}
// Adding a function to calculate dot product
double scalar_product(const double* vector1, const double* vector2, int size){
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += vector1[i] * vector2[i];
    }
    return sum;
}

// Creating a function to add vectors
double* add_vectors(const double* vector1, const double* vector2, int size){
    double* new_vector = new double[size];
    for(int i = 0; i < size; i++){
        new_vector[i] = vector1[i] + vector2[i];
    }
    return new_vector;
}

int main(){

    return 0;
}