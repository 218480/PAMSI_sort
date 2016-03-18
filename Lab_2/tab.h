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

protected:


public:
	void Add(int number);
	void Set_Allocate_Size(unsigned int n);
	int* Alloc(unsigned int size);
	void Dealloc();
	void List();

	unsigned int allocate_size;
	Tab();

};




#endif
