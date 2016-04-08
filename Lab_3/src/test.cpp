/*
 * tabtest.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#include "../inc/test.h"
#include "../inc/list.h"


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define N 200000000

void Test::Przygotuj()
{
	int tmp;
	std::cout << "Start" << std::endl;
	cout << "Podaj rozmiar problemu: ";
	cin >> tmp;

	try
	{
		lista.Fill(tmp);
	}
	catch(const char* str)
	{

	}


}

void Test::Badaj()
{
	int pos = 0;
	try
	{
		pos = lista.Find(2);
	}
	catch(const char* str)
	{

	};
}
