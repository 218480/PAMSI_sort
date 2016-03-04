#include "tab.h"
#include <iostream>


// Tworzy poczatkowa tablice
Tab::Tab()
{
	tab = Alloc(START_SIZE);
	index = 0;

}

// Wypisuje wszystkie wartosci w tablicy
void Tab::List()
{
	int i = 0;
	while(i < index)
	{
		std::cout << "Liczba: " << this->tab[i] << std::endl;
		i++;
	}
}

// Zwraca wskaznik na nowa tablice
int* Tab::Alloc(int size)
{
	return new int[size];
}

// Zwalnia wskaznik na tablice
void Tab::Dealloc()
{
	delete[] tab;
}

// Dodaje nowa wartosc do tablicy
void Tab::Add(int number)
{
	int* tmp;

	if(index < size)
	{
		tab[index] = number;
		index++;
	}
	else
	{
		tmp = Alloc(size + 1);
		for(int i = 0; i < index; i++)
		{
			tmp[i] = this->tab[i];
		}

		tmp[index] = number;
		index++;

		Dealloc();

		this->tab = tmp;
	}
}
