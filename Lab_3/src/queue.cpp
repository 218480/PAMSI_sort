/*
 * queue.cpp
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */




#include "../inc/queue.h"

void Queue::Push(int val)
{
	data.Add(data.Size(),val);
}

int Queue::Get()
{
	int tmp = 0;

	tmp = data.Get(0);
	data.Remove(0);

	return tmp;
}

int Queue::Size()
{
	return data.Size();
}

Queue::~Queue()
{

}
