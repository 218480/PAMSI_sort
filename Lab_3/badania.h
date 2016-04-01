/*
 * badania.h
 *
 *  Created on: 18 mar 2016
 *      Author: dmajchrz
 */

#ifndef BADANIA_H_
#define BADANIA_H_


class Badania
{
protected:

public:
	unsigned int problem_size;
	virtual void Przygotuj() = 0;
	virtual void Badaj() = 0;
};


#endif /* BADANIA_H_ */
