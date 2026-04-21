#include <iostream>
using namespace std;

double cube(double num){
    double result = num * num * num;
    cout << "Twoja liczba to: " << endl;
    return result;
}



int main(){

    cout << cube(5.0);
    

    return 0;
}