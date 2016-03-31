#include "tab.h"
#include <iostream>


// Tworzy poczatkowa tablice
Tab::Tab()
{
	tab = Alloc(START_SIZE);
	index = 0;
	size = START_SIZE;

}

// Wypisuje wszystkie wartosci w tablicy
void Tab::List()
{
	unsigned int i = 0;
	while(i < index)
	{
		std::cout << "Liczba: " << this->tab[i] << std::endl;
		i++;
	}
}

// Zwraca wskaznik na nowa tablice
int* Tab::Alloc(unsigned int size)
{
	this->size = size;
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

	if(index < size )
	{
		tab[index] = number;
		index++;
	}
	else
	{
#ifdef DOUBLE_SIZE
		tmp = Alloc(size * 2);
#else
		tmp = Alloc(size + ALLOCATE_SIZE);
#endif

		for(unsigned int i = 0; i < index; i++)
		{
			tmp[i] = this->tab[i];
		}

		tmp[index] = number;
		index++;

		Dealloc();

		this->tab = tmp;
	}
}
