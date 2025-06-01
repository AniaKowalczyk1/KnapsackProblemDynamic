#ifndef LIBFILES_H
#define LIBFILES_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Produkty.h" 
using namespace std;


/*
Funkcja otwieraj�ca zapis do pliku
@param zapis - referencja do obiektu strumienia wyj�ciowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_zapisDoPliku(ofstream& zapis, string& nazwaPliku);

/*
Funkcja otwieraj�ca zapis do pliku
@param odczyt - referencja do obiektu strumienia wej�ciowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_odczytZpliku(ifstream& odczyt, string& nazwaPliku);

/*
Funkcja zapisuj�ca zawarto�� wektora do pliku.
@param zapis - referencja do obiektu strumienia wyj�ciowego pliku
@param nazwaPliku - referencja do nazwy pliku, do kt�rego zostan� zapisane dane
@param pary - referencja do wektora warto�ci, kt�re zostan� zapisane do pliku
*/
void f_wektorDoPliku(ofstream& zapis, string& nazwaPliku, vector<int>& pary);



/*
Funkcja do wczytywania danych z pliku
@param odczyt - referencja do obiektu strumienia wej�ciowego pliku
@param max_pojemnosc - pojemnosc plecaka, przekazana jako referencja, do odczytania z pliku
@return zwraca wektor zawieraj�cy Produkty
*/
vector<Produkt> f_zapisz(ifstream& odczyt, int& max_pojemnosc);

#endif


