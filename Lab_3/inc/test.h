/*
 * tabtes.h
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */


#ifndef TABTEST_H_
#define TABTEST_H_

#include "list.h"
#include "queue.h"
#include "stack.h"

class Test
{
private:
	List  lista;
	Stack stos;
	Queue kolejka;
public:
	unsigned int problem_size;
	virtual void Badaj    ();
	virtual void Przygotuj();
};


#endif /* TABTES_H_ */
