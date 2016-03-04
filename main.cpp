#include <iostream>
#include "timer.h"
#include "tab.h"




using namespace std;
int main()
{
	int tmp = 0;



	Timer tim;
	Tab dynamic_tab;

	tim.Start();
	for(;;)
	{
		cout << "Podaj liczbe: ";
		cin >> tmp;
		if(tmp == -1) break;
		dynamic_tab.Add(tmp);
		dynamic_tab.List();
	}

	cout << endl << "Czas dzialania programu: " << tim.Show() << " ms" << endl;

	cout << "Koniec programu." << endl;
	return 0;
}
