#pragma once
#include <iostream>
#include <string>

using namespace std;


// Klasa reprezentująca produkt
class Produkt {
public:
    int indeks;
    string nazwa;
    int cena;       // Wartość
    int rozmiar;    // Waga

    Produkt(int ind, string naz, int cen, int roz);
};