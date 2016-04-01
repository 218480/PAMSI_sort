/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "tab.h"
#include "tabtest.h"

#include <iostream>

using namespace std;


void TabTest::Przygotuj()
{
	Tab dynamic_tab;
	unsigned int tmp;

	cout << "Podaj rozmiar problemu do zbadania: ";
	cin  >> this->problem_size;
	cout << endl << "Podaj liczbe o ktora powiekszana bedzie tablica: ";
	cin  >> tmp;
	//cout << tmp;
	dynamic_tab.Set_Allocate_Size(tmp);


}

void TabTest::Badaj()
{
	for(unsigned int i = 0; i < this->problem_size; i++)
	{
			dynamic_tab.Add(1);

	}
}
