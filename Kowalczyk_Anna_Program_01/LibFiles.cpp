#include "libFiles.h"

// Funkcja otwieraj�ca plik do zapisu
void f_zapisDoPliku(ofstream& zapis, string& nazwaPliku) {

    int dlugosc = nazwaPliku.size();  // Pobranie d�ugo�ci nazwy pliku
    // Sprawdzenie, czy nazwa pliku ma rozszerzenie ".txt", je�li nie, dodaj je
    if ((dlugosc <= 4) or (nazwaPliku[dlugosc - 4] != '.' or nazwaPliku[dlugosc - 3] != 't' or nazwaPliku[dlugosc - 2] != 'x' or nazwaPliku[dlugosc - 1] != 't')) {
        nazwaPliku += ".txt"; // Dodanie rozszerzenia ".txt", je�li nie zosta�o podane
    }

    zapis.open(nazwaPliku); // Otwarcie pliku o podanej nazwie do zapisu

    // Sprawdzenie, czy plik zosta� poprawnie otwarty
    if (!zapis) {
        cout << "\n Nie moge otworzyc pliku!"; // Komunikat o b��dzie
        cin.ignore();
        (void)getchar();
        exit(0); // Wyj�cie z programu w przypadku b��du
    }
}

// Funkcja otwieraj�ca plik do odczytu
void f_odczytZpliku(ifstream& odczyt, string& nazwaPliku) {

    int dlugosc = nazwaPliku.size();  // Pobranie d�ugo�ci nazwy pliku
    // Sprawdzenie, czy nazwa pliku ma rozszerzenie ".txt", je�li nie, dodaj je
    if ((dlugosc <= 4) or (nazwaPliku[dlugosc - 4] != '.' or nazwaPliku[dlugosc - 3] != 't' or nazwaPliku[dlugosc - 2] != 'x' or nazwaPliku[dlugosc - 1] != 't')) {
        nazwaPliku += ".txt"; // Dodanie rozszerzenia ".txt", je�li nie zosta�o podane
    }

    odczyt.open(nazwaPliku); // Otwarcie pliku o podanej nazwie do odczytu

    // Sprawdzenie, czy plik zosta� poprawnie otwarty
    if (!odczyt) {
        cout << "\n Nie moge utworzyc pliku!"; // Komunikat o b��dzie
        cin.ignore();
        (void)getchar();
        exit(0); // Wyj�cie z programu w przypadku b��du
    }
}

//Funkcja zapisuj�ca zawarto�� wektora do pliku.
void f_wektorDoPliku(ofstream& zapis, string& nazwaPliku, vector<int>& pary) {
    // Zapisz zawarto�� wektora do pliku
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
            // Strumie� wej�ciowy do parsowania linii
            istringstream ss(linia);

            int indeks;
            string nazwa;
            int cena;
            int rozmiar;

            // Sprawdzenie, czy wszystkie warto�ci s� poprawne
            if (ss >> indeks >> nazwa >> cena >> rozmiar) {
                // Utw�rz nowy produkt i dodaj do wektora
                Produkt dodawany(indeks, nazwa, cena, rozmiar);
                zapisane.push_back(dodawany);
            }
            else {
                // Linia jest niepoprawna, mo�esz j� pomin�� lub zasygnalizowa� b��d
                cerr << "B��dna linia: " << linia << endl;  // Opcjonalnie: zg�o� b��d
            }
        }
    }

    return zapisane;
}