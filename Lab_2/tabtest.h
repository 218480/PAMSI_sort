/*
 * tabtes.h
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */
#include "badania.h"


#ifndef TABTEST_H_
#define TABTEST_H_


class TabTest : public Badania
{
private:
	Tab dynamic_tab;
public:
	unsigned int problem_size;
	virtual void Badaj();
	virtual void Przygotuj();
};


#endif /* TABTES_H_ */
