#ifndef STACK_H_
#define STACK_H_

#include "../list.h"

class Stack_Interface
{
private:
	List data;
public:
	virtual int  Pop () = 0;
	virtual void Push(int val) = 0;
	virtual int  size() = 0;
};

#endif
