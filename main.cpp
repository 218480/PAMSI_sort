#include <iostream>
#include "timer.h"
#include "tab.h"




using namespace std;
int main(int argc, char ** argv)
{
	int tmp = 0;



	Timer tim;	     // Pomiar czasu
	Tab dynamic_tab; // Tablica dynamiczna

	tim.Start();     // Poczatek pomiaru czasu
	for(;;)
	{
		cout << "Podaj liczbe: ";
		cin >> tmp;
		if(tmp == -1) break;  // Koniec programu
		dynamic_tab.Add(tmp);

	}

	cout << endl;
	dynamic_tab.List();

	cout << endl << "Czas dzialania programu: " << tim.Show() << " ms" << endl;
	cout << "Koniec programu." << endl;


	return 0;
}
