#ifndef TAB_H
#define TAB_H



#define START_SIZE 10


// Klasa tablicy dynamicznej
class Tab
{
private:
	int* tab;
	unsigned int size;
	unsigned int index;

public:
	void Add(int number);
	int* Alloc(int size);
	void Dealloc();
	void List();

	Tab();

};




#endif
