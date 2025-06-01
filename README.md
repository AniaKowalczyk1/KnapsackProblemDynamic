Program rozwiązuje klasyczny problem plecakowy (ang. Knapsack problem) z wykorzystaniem programowania dynamicznego. Jego celem jest wybranie optymalnego zestawu produktów tak, aby maksymalizować sumę wartości (cen) bez przekraczania określonej pojemności plecaka.

Przebieg działania programu
Wczytywanie danych z pliku
Program otwiera i odczytuje dane wejściowe z pliku o nazwie dane (bez rozszerzenia). Dane te zawierają:
maksymalną pojemność plecaka,
listę produktów, z których każdy posiada nazwę, rozmiar (waga/objętość) oraz cenę (wartość).
Walidacja danych
Sprawdzane jest, czy dane wejściowe są poprawne (np. czy lista produktów nie jest pusta oraz czy pojemność plecaka jest większa od zera). W przypadku błędów program zgłasza wyjątek i kończy działanie z komunikatem o błędzie.

Budowa tablicy wartości plecaka
Program tworzy dwuwymiarową tablicę, która przechowuje maksymalne wartości, jakie można osiągnąć dla różnych pojemności plecaka i zestawów produktów. W tym celu używana jest funkcja programowania dynamicznego, która iteracyjnie wylicza najlepsze rozwiązania.

Budowa tablicy indeksów wybranych produktów
Na podstawie tablicy wartości tworzona jest druga tablica, która pozwala odtworzyć konkretne produkty wybrane do plecaka, tak aby uzyskać optymalne rozwiązanie.

Wyświetlanie wyników
Program wypisuje na ekran:
tablicę wartości plecaka,
tablicę indeksów produktów wybranych do plecaka,
listę produktów, które zostały dodane do plecaka w optymalnym rozwiązaniu.
