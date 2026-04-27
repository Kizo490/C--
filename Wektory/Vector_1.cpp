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
    double* v1 = new double[5]{1.0, 2.0, 3.0, 4.0, 5.0};
    double* v2 = new double[5]{6.0, 7.0, 8.0, 9.0, 10.0};

    double v3[] = {0.0, 2.0, 3.0};
    double v4[] = {0.0, 7.0, 0.0};

    cout << "--- First pair (Size 5)--- " << endl;
    cout << " Vector 1: " << endl;
    print_vector(v1, 5);
    cout << " Vector 2: " << endl;
    print_vector(v2, 5);

    double product1 = scalar_product(v1, v2, 5);
    cout << "Scalar Product: " << product1 << endl;

    double* sum1 = add_vectors(v1, v2, 5);
    cout << "Sum of vectors: " << endl;
    print_vector (sum1, 5);


    cout << "--- Second pair (Size 3) ---" << endl;
    cout << " Vector 3: " << endl;
    print_vector(v3, 3);
    cout << " Vector 4: " << endl;
    print_vector(v4, 3);

    double product2 = scalar_product(v3, v4, 3);
    cout << "Scalar Product: " << product2 << endl;

    double* sum2 = add_vectors(v3, v4, 3);
    cout << "Sum of vectors: " << endl;
    print_vector(sum2, 3);

    delete[] v1;
    delete[] v2;

    delete[] sum1;
    delete[] sum2;

    return 0;
}