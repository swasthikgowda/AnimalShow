/*
 * Animals.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
class ShowTrick;

using namespace std;
class animal
{
public:
	virtual void show()=0;
	virtual void Accept(ShowTrick *s) = 0;

};





#endif /* ANIMALS_H_ */
