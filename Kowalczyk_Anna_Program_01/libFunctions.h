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
// Funkcja do wyświetlania tablicy
@param tabela - wektor do wyświetlenia
*/
void wyswietl_tabele(const vector<vector<int>>& tabela);

/*
// Funkcja do obliczania tablicy wartości plecaka
@param produkty - wektor przechowujący produkty
@param tabela - wektor wynikowy
@param max_pojemnosc - pojemnosc plecaka
*/
void  f_tabelaCen(vector<Produkt> produkty, vector<vector<int>>& tabela, int max_pojemnosc);

/*
// Funkcja do obliczania tablicy indeksów dodanych produktów
@param produkty - wektor przechowujący produkty
@param tabela - wektor z wartościami cen
@param tab - wektor wynikowy
@param max_pojemnosc - pojemnosc plecaka
*/
void f_tabelaIndeksow(vector<Produkt> produkty, vector<vector<int>> tabela, vector<vector<int>>& tab, int max_pojemnosc);


/*
// Funkcja do wyświetlania produktów w plecaku
@param max_pojemnosc - pojemnosc plecaka
@param produkty - wektor przechowujący produkty
@param tab - wektor wynikowy
*/
void f_wyswietlProdzPlecaka(int max_pojemnosc, vector<Produkt> produkty, vector<vector<int>> tab);