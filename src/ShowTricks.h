/*
 * ShowTricks.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef SHOWTRICKS_H_
#define SHOWTRICKS_H_
#include "Animals.h"

class Dog;
class Cat;
class Cow;

class ShowTrick
{
public:
	virtual void ShowDogTricks(Dog *dog) = 0;
	virtual void ShowCatTricks(Cat *cat) = 0;
	virtual void ShowCowTricks(Cow *cow) = 0;

};

class JumpTricks: public ShowTrick
{
public:
	void ShowDogTricks(Dog *dog);
	void ShowCatTricks(Cat *cat);
	void ShowCowTricks(Cow *cow);

};
class RunningTrick: public ShowTrick
{
public:
	void ShowDogTricks(Dog *dog);
	void ShowCatTricks(Cat *cat);
	void ShowCowTricks(Cow *cow);
};
class EatingTrick:public ShowTrick
{
public:
	void ShowDogTricks(Dog *dog);
	void ShowCatTricks(Cat *cat);
	void ShowCowTricks(Cow *cow);
};

#endif /* SHOWTRICKS_H_ */
