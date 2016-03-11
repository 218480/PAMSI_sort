#include <iostream>
#include <fstream>
#include <cmath>
#include "timer.h"
#include "tab.h"




using namespace std;
int main(int argc, char ** argv)
{
	int tmp = 0;
	string name;
	ifstream plik;


	//`std:cout << "Podaj nazwe pliku do otwarcia: ";
	//cin >> name;
	//plik.open(name.c_str(), ios::in);



	Timer tim;	     // Pomiar czasu
	Tab dynamic_tab; // Tablica dynamiczna

	tim.Start();     // Poczatek pomiaru czasu
	for(long int i = 0; i < pow(10,5); i++)
	{
		//plik >> tmp;
		dynamic_tab.Add(1);

	}

	cout << endl;

	cout << endl << "Czas dzialania programu: " << tim.Show() << " ms" << endl;
	cout << "Koniec programu." << endl;


	return 0;
}
