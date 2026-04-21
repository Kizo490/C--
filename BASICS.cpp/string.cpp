#include <iostream>

using namespace std;

int main(){

    string tekst = "|Tekst to nauki zmiennej string|";

    cout << "Jezeli chcemy aby program wyswietlil ilosc indeksow naszego tekstu, musimy uzyc funkcji: teskt.lenght(): " << endl;
    cout << endl;
    
    cout << "Nasz przykładowy teskt to : " << tekst << " I bedzie on mial: " << tekst.length() << " indeksy" << endl;
    cout << endl;
    
    cout << "Jesli chcemy wypisac konkretny znak w naszym tekscie, musimy uzyc funkcji: teskst[]." << endl;
    cout << endl;
    
    cout << "Z przykładowego tekstu: " << tekst << " Wypisujemy indeks o numerze 1, który jest odpowednikiem litery T" << endl;
    cout << endl;
    
    cout << "Przykład: " << tekst[1] << endl; 
    cout << endl;

    cout << "Teraz kiedy chcemy sprawdzic od ktorego indeksu zaczyna sie jakies słowo czy litera w naszym tekscie, musimy uzyc funkcji: tekst.find() " << endl;
    cout << endl;

    cout << "Przykład: " << tekst.find("to", 0) << " Słowo |to| zaczyna się od 7 indeksu naszego tekstu " << endl;
    cout << endl;

    cout << "Powiedzmy ze chcemy wypisac w konsoli ze zdania: " << tekst << " tylko słowo |nauki|. Zrobimy to za pomoca funkcji tekst.substr:" << endl;
    cout << endl;

    cout << tekst.substr(10, 5);

  
    
    return 0;
}