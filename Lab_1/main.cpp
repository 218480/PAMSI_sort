#include <iostream>
#include <fstream>
#include <cmath>
#include "timer.h"
#include "tab.h"



using namespace std;
int main(int argc, char ** argv)
{
	Timer time;




	time.Start();

	time.Stop();
	cout << "Czas: " << time.Show() << endl;







	int tmp = 0;
	string name;
	ifstream plik;


	//`std:cout << "Podaj nazwe pliku do otwarcia: ";
	//cin >> name;
	//plik.open(name.c_str(), ios::in);



	Timer tim;	     // Pomiar czasu
	Tab dynamic_tab; // Tablica dynamiczna

	tim.Start();     // Poczatek pomiaru czasu
	for(long int i = 0; i < pow(10,6); i++)
	{
		//plik >> tmp;
		dynamic_tab.Add(1);

	}




	return 0;
}
