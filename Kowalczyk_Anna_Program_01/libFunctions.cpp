#include "libFunctions.h"


// Funkcja do wy�wietlania tablicy
void wyswietl_tabele(const vector<vector<int>>& tabela) {
    for (const auto& wiersz : tabela) {
        for (const auto& wartosc : wiersz) {
            cout << wartosc << "\t";  // Dodaj tabulator po ka�dej warto�ci
        }
        cout << endl;  // Nowa linia po ka�dym wierszu
    }
}



// Funkcja do obliczania tablicy warto�ci plecaka
void  f_tabelaCen(vector<Produkt> produkty, vector<vector<int>>& tabela, int max_pojemnosc) {
    for (int i = 1; i <= produkty.size(); i++) {
        for (int p = 0; p <= max_pojemnosc; p++) {
            if (produkty[i - 1].rozmiar <= p) {
                // Je�li produkt mie�ci si� w plecaku
                tabela[i][p] = max(
                    tabela[i - 1][p],
                    produkty[i - 1].cena + tabela[i][p - produkty[i - 1].rozmiar]  // Dodajemy produkt
                );
            }
            else {
                // Je�li produkt nie mie�ci si� w plecaku
                tabela[i][p] = tabela[i - 1][p];  // Przenosimy warto�� z poprzedniego wiersza
            }
        }
    }
}

// Funkcja do obliczania tablicy indeks�w dodanych produkt�w
void f_tabelaIndeksow(vector<Produkt> produkty, vector<vector<int>> tabela, vector<vector<int>>& tab, int max_pojemnosc) {
    for (int i = 1; i <= produkty.size(); i++) {
        for (int p = 0; p <= max_pojemnosc; p++) {
            if (produkty[i - 1].rozmiar <= p) {
                if (tabela[i - 1][p] < (tabela[i - 1][p - produkty[i - 1].rozmiar] + produkty[i - 1].cena)) {
                    tab[i][p] = i;  // Indeks dodanego przedmiotu
                }
                else {
                    tab[i][p] = tab[i - 1][p];  // Przeniesienie indeksu z poprzedniego wiersza
                }
            }
            else {
                tab[i][p] = tab[i - 1][p];  // Przeniesienie indeksu z poprzedniego wiersza
            }
        }
    }
}

// Funkcja do wy�wietlania produkt�w w plecaku
void f_wyswietlProdzPlecaka(int max_pojemnosc, vector<Produkt> produkty, vector<vector<int>> tab) {
    int j = max_pojemnosc;
    while (j > 0 && tab[produkty.size()][j] != 0) {
        int indeks = tab[produkty.size()][j];
        cout << indeks << " " << produkty[indeks - 1].nazwa << endl;
        j -= produkty[indeks - 1].rozmiar;
    }
}