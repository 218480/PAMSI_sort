#include "tab.h"
#include <iostream>

Tab::Tab()
{
	tab = Alloc(START_SIZE);
	index = 0;

}


void Tab::List()
{
	int i = 0;
	while(i < index)
	{
		std::cout << "Liczba: " << this->tab[i] << std::endl;
		i++;
	}
}
int* Tab::Alloc(int size)
{

	int* tmp = new int[size];

	if(tmp)
	{
		this->size = size;
		return tmp;
	}
	else
		return 0;

}

void Tab::Dealloc()
{
	delete[] tab;
}

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
