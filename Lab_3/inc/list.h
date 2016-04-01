/*
 * list.h
 *
 *  Created on: 1 kwi 2016
 *      Author: dmajchrz
 */

#ifndef INC_LIST_H_
#define INC_LIST_H_

#include "interface/listinterface.h"

class List : public List_Interface
{
private:
public:
	virtual void Add    (int pos,int val);
	virtual void Remove (int pos);
	virtual int  Get    (int pos);
	virtual int  Size   ();
	virtual ~List       ();
};


#endif /* INC_LIST_H_ */
