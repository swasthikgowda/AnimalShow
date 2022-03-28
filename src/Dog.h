/*
 * Dog.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef DOG_H_
#define DOG_H_
#include "Animals.h"
#include "ShowTricks.h"

class Dog: public animal
{
public:
	void show();
	void Accept(ShowTrick *s);

};

#endif /* DOG_H_ */
