/*
 * Dog.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "Dog.h"
#include "Animals.h"
#include "ShowTricks.h"


void Dog::show()
{

	cout << "Dog Show Started" << endl;

}
void Dog::Accept(ShowTrick *s)
{
	s->ShowDogTricks(this);

}

