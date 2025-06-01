#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include "LibFiles.h" 
#include "Produkty.h" 
#include "libFunctions.h"

using namespace std;


/*
// Funkcja do wy�wietlania tablicy
@param tabela - wektor do wy�wietlenia
*/
void wyswietl_tabele(const vector<vector<int>>& tabela);

/*
// Funkcja do obliczania tablicy warto�ci plecaka
@param produkty - wektor przechowuj�cy produkty
@param tabela - wektor wynikowy
@param max_pojemnosc - pojemnosc plecaka
*/
void  f_tabelaCen(vector<Produkt> produkty, vector<vector<int>>& tabela, int max_pojemnosc);

/*
// Funkcja do obliczania tablicy indeks�w dodanych produkt�w
@param produkty - wektor przechowuj�cy produkty
@param tabela - wektor z warto�ciami cen
@param tab - wektor wynikowy
@param max_pojemnosc - pojemnosc plecaka
*/
void f_tabelaIndeksow(vector<Produkt> produkty, vector<vector<int>> tabela, vector<vector<int>>& tab, int max_pojemnosc);


/*
// Funkcja do wy�wietlania produkt�w w plecaku
@param max_pojemnosc - pojemnosc plecaka
@param produkty - wektor przechowuj�cy produkty
@param tab - wektor wynikowy
*/
void f_wyswietlProdzPlecaka(int max_pojemnosc, vector<Produkt> produkty, vector<vector<int>> tab);