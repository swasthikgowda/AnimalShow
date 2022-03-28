/*
 * Cat.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef CAT_H_
#define CAT_H_

#include "Animals.h"

class Cat: public animal
{
	void show();
	void Accept(ShowTrick *s);

};

#endif /* CAT_H_ */
