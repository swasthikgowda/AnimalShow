/*
 * Cat.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "Cat.h"
#include "Animals.h"
#include "ShowTricks.h"

void Cat::show()
{
	cout << "Cat Show is Started" << endl;

}

void Cat::Accept(ShowTrick *s)
{
	s->ShowCatTricks(this);


}
