#include "../inc/stack.h"


void Stack::Push(int val)
{
	data.Add(data.Size(),val);
}

int Stack::Pop()
{
	int tmp;

	tmp = data.Get(data.Size());
	data.Remove(data.Size());

	return tmp;
}

int Stack::size()
{
	return data.Size();
}

Stack::~Stack()
{

}
