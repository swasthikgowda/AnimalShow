/*
 * Cow.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "Cow.h"
#include "Animals.h"
#include "ShowTricks.h"

void Cow::show()
{
	cout << "Cow show is started" << endl;
}
void Cow::Accept(ShowTrick *s)
{
	s->ShowCowTricks(this);


}
