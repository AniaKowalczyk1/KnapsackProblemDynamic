#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include "LibFiles.h" 
#include "Produkty.h" 
#include "libFunctions.h"
#include "libExceptions.h"

using namespace std;


int main() {
    string nazwaPliku = "dane";
    ifstream odczyt;
    int max_pojemnosc;  // Maksymalna pojemność plecaka
    vector<Produkt> produkty;

    try {
        f_odczytZpliku(odczyt, nazwaPliku);
        produkty = f_zapisz(odczyt, max_pojemnosc);
        odczyt.close();

        if (produkty.empty() || max_pojemnosc <= 0) {
            throw MyException("Nieprawidlowe dane wejsciowe.");
        }

        vector<vector<int>> tabela(produkty.size() + 1, vector<int>(max_pojemnosc + 1, 0));
        f_tabelaCen(produkty, tabela, max_pojemnosc);

        cout << "Tablica dla problemu plecakowego\n";
        wyswietl_tabele(tabela);

        vector<vector<int>> tab(produkty.size() + 1, vector<int>(max_pojemnosc + 1, 0));
        f_tabelaIndeksow(produkty, tabela, tab, max_pojemnosc);

        cout << "Tablica indeksow dodanych przedmiotow dla problemu plecakowego:\n";
        wyswietl_tabele(tab);

        f_wyswietlProdzPlecaka(max_pojemnosc, produkty, tab);

    }
    catch (const MyException& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}