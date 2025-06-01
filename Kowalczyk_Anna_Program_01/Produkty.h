#pragma once
#include <iostream>
#include <string>

using namespace std;


// Klasa reprezentuj¹ca produkt
class Produkt {
public:
    int indeks;
    string nazwa;
    int cena;       // Wartoœæ
    int rozmiar;    // Waga

    Produkt(int ind, string naz, int cen, int roz);
};