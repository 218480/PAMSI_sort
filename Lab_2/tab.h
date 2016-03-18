#ifndef TAB_H
#define TAB_H



#define START_SIZE 10
#define ALLOCATE_SIZE 1000
//#define DOUBLE_SIZE    // Strategia podwajania rozmiaru tablicy w przypadku braku miejsca

// Klasa tablicy dynamicznej
class Tab
{
private:
	int* tab;
	unsigned int size;
	unsigned int index;

public:
	void Add(int number);
	int* Alloc(unsigned int size);
	void Dealloc();
	void List();

	Tab();

};




#endif
