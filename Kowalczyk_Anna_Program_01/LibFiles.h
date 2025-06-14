#ifndef LIBFILES_H
#define LIBFILES_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Produkty.h" 
using namespace std;


/*
Funkcja otwierająca zapis do pliku
@param zapis - referencja do obiektu strumienia wyjściowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_zapisDoPliku(ofstream& zapis, string& nazwaPliku);

/*
Funkcja otwierająca zapis do pliku
@param odczyt - referencja do obiektu strumienia wejściowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_odczytZpliku(ifstream& odczyt, string& nazwaPliku);

/*
Funkcja zapisująca zawartość wektora do pliku.
@param zapis - referencja do obiektu strumienia wyjściowego pliku
@param nazwaPliku - referencja do nazwy pliku, do którego zostaną zapisane dane
@param pary - referencja do wektora wartości, które zostaną zapisane do pliku
*/
void f_wektorDoPliku(ofstream& zapis, string& nazwaPliku, vector<int>& pary);



/*
Funkcja do wczytywania danych z pliku
@param odczyt - referencja do obiektu strumienia wejściowego pliku
@param max_pojemnosc - pojemnosc plecaka, przekazana jako referencja, do odczytania z pliku
@return zwraca wektor zawierający Produkty
*/
vector<Produkt> f_zapisz(ifstream& odczyt, int& max_pojemnosc);

#endif


