#pragma once
#include <iostream>
#include <string>

using namespace std;


// Klasa reprezentuj�ca produkt
class Produkt {
public:
    int indeks;
    string nazwa;
    int cena;       // Warto��
    int rozmiar;    // Waga

    Produkt(int ind, string naz, int cen, int roz);
};