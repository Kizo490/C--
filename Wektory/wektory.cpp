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

if(oceny.size() == 0){
    cout << "Brak ocen do obliczenia Sredniej";
}
else{
    for(int i = 0; i < oceny.size(); i++){
        suma = suma + oceny[i];
    }
    cout << "Srednia ocen wynosi: " << suma / oceny.size() << endl;
}

return 0;
}