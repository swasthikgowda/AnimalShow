/*
 * Cow.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef COW_H_
#define COW_H_
#include "Animals.h"

class Cow:public animal
{
	void show();
	void Accept(ShowTrick *s);
};


#endif /* COW_H_ */
