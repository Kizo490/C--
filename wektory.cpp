#include <iostream>
#include <vector>

using namespace std;

int main(){
vector<int> oceny;

int wpisana_ocena;
double suma = 0;

while (true){
    cout << "Podaj ocene (0 aby zakonczyc): ";
    cin >> wpisana_ocena;
if(wpisana_ocena == 0){
    break;
    }

oceny.push_back(wpisana_ocena);
}

return 0;
}