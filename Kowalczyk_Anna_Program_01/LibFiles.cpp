#include "libFiles.h"

// Funkcja otwieraj¹ca plik do zapisu
void f_zapisDoPliku(ofstream& zapis, string& nazwaPliku) {

    int dlugosc = nazwaPliku.size();  // Pobranie d³ugoœci nazwy pliku
    // Sprawdzenie, czy nazwa pliku ma rozszerzenie ".txt", jeœli nie, dodaj je
    if ((dlugosc <= 4) or (nazwaPliku[dlugosc - 4] != '.' or nazwaPliku[dlugosc - 3] != 't' or nazwaPliku[dlugosc - 2] != 'x' or nazwaPliku[dlugosc - 1] != 't')) {
        nazwaPliku += ".txt"; // Dodanie rozszerzenia ".txt", jeœli nie zosta³o podane
    }

    zapis.open(nazwaPliku); // Otwarcie pliku o podanej nazwie do zapisu

    // Sprawdzenie, czy plik zosta³ poprawnie otwarty
    if (!zapis) {
        cout << "\n Nie moge otworzyc pliku!"; // Komunikat o b³êdzie
        cin.ignore();
        (void)getchar();
        exit(0); // Wyjœcie z programu w przypadku b³êdu
    }
}

// Funkcja otwieraj¹ca plik do odczytu
void f_odczytZpliku(ifstream& odczyt, string& nazwaPliku) {

    int dlugosc = nazwaPliku.size();  // Pobranie d³ugoœci nazwy pliku
    // Sprawdzenie, czy nazwa pliku ma rozszerzenie ".txt", jeœli nie, dodaj je
    if ((dlugosc <= 4) or (nazwaPliku[dlugosc - 4] != '.' or nazwaPliku[dlugosc - 3] != 't' or nazwaPliku[dlugosc - 2] != 'x' or nazwaPliku[dlugosc - 1] != 't')) {
        nazwaPliku += ".txt"; // Dodanie rozszerzenia ".txt", jeœli nie zosta³o podane
    }

    odczyt.open(nazwaPliku); // Otwarcie pliku o podanej nazwie do odczytu

    // Sprawdzenie, czy plik zosta³ poprawnie otwarty
    if (!odczyt) {
        cout << "\n Nie moge utworzyc pliku!"; // Komunikat o b³êdzie
        cin.ignore();
        (void)getchar();
        exit(0); // Wyjœcie z programu w przypadku b³êdu
    }
}

//Funkcja zapisuj¹ca zawartoœæ wektora do pliku.
void f_wektorDoPliku(ofstream& zapis, string& nazwaPliku, vector<int>& pary) {
    // Zapisz zawartoœæ wektora do pliku
    for (const auto& para : pary) {
        zapis << para << "\n";
    }
}

// Funkcja do wczytywania danych z pliku
vector<Produkt> f_zapisz(ifstream& odczyt, int& max_pojemnosc) {
    vector<Produkt> zapisane;
    string linia;
    bool flaga = true;
    // Odczyt linii z pliku
    while (getline(odczyt, linia)) {
        if (flaga) {
            max_pojemnosc = stoi(linia);
            flaga = false;
        }
        else {
            // Strumieñ wejœciowy do parsowania linii
            istringstream ss(linia);

            int indeks;
            string nazwa;
            int cena;
            int rozmiar;

            // Sprawdzenie, czy wszystkie wartoœci s¹ poprawne
            if (ss >> indeks >> nazwa >> cena >> rozmiar) {
                // Utwórz nowy produkt i dodaj do wektora
                Produkt dodawany(indeks, nazwa, cena, rozmiar);
                zapisane.push_back(dodawany);
            }
            else {
                // Linia jest niepoprawna, mo¿esz j¹ pomin¹æ lub zasygnalizowaæ b³¹d
                cerr << "B³êdna linia: " << linia << endl;  // Opcjonalnie: zg³oœ b³¹d
            }
        }
    }

    return zapisane;
}