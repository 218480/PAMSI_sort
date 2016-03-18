#include <iostream>
#include <fstream>
#include <cmath>
#include "timer.h"
#include "tab.h"
#include "tabtest.h"


using namespace std;
int main(int argc, char ** argv)
{
	Timer time;
	TabTest test;


	test.Przygotuj();
	time.Start();
	test.Badaj();
	time.Stop();
	cout << "Czas: " << time.Show() << " ms."<< endl;





	return 0;
}
