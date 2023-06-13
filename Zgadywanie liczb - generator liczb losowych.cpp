// Zgadywanie liczb - generator liczb losowych.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{
	int liczba, strzal = 0, proby = 0;
	cout << "Witaj, pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1;

	while (strzal != liczba)
	{
		proby++;
		cout << "Zgadnij jaka? (To Twoja " << proby << " proba)" << endl;
		cin >> strzal;
		if (strzal == liczba)
			cout << "Udalo sie, wygrywasz w " << proby << " probie" << endl;
		else if (strzal < liczba)
			cout << "To za malo" << endl;
		else
			cout << "To za duzo" << endl;
	}
	getchar(); getchar();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
