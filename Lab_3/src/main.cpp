#include <iostream>
#include <fstream>
#include <cmath>
#include "../inc/timer.h"
#include "../inc/tab.h"
#include "../inc/tabtest.h"


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
