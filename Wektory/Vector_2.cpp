#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
// Adding function which prints the vector
void print_vector(const vector<double>& vec){
    for(const double& element : vec){
        cout << element << endl;
    }
}
// Adding a function to calculate dot product
double scalar_product(const vector<double>& vector1, const vector<double>& vector2){
    double sum = 0.0;
    for(auto it1 = vector1.begin(), it2 = vector2.begin(); it1 != vector1.end(); ++it1, ++it2){
        sum += *it1 * *it2;
    }
    return sum;
}

// Creating a function to add vectors
vector <double> add_vectors(const vector<double>& vector1, const vector<double>& vector2){
    vector<double> sum_vector;
    for(int i = 0; i < vector1.size(); i++){
        sum_vector.push_back(vector1[i] + vector2[i]);
    }
    return sum_vector;
}
// Adding new normalize function
void normalize(vector<double>& vector1){
    double sum_of_squares = 0.0;
    for(const double& val : vector1){
        sum_of_squares += val * val;
    }
    double length = sqrt(sum_of_squares);

    for(double& val : vector1){
        val = val / length;
    }
}


int main(){
    
    vector<double> v1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "Vector 1: " << endl;
    print_vector(v1);
    cout << "Vector 1 after normalize function: " << endl;
    normalize(v1);
    print_vector(v1);

    vector<double> v2 = {6.0, 7.0, 8.0, 9.0, 10.0};
    cout << "Vector 2: " << endl;
    print_vector(v2);
    cout << "Vector two after scalar and adding functions: " << endl;
    double Scalar_score = scalar_product(v1, v2);
    cout << "Scalar product: " << Scalar_score << endl;
    cout << endl;
    cout << "Adding vectors: " << endl;
    vector<double> Sum = add_vectors(v1, v2); 
    print_vector(Sum);
    
    return 0;
}





  