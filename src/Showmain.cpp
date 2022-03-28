/*
 * Showmain.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */
#include "Animals.h"
#include "Dog.h"
#include "Cow.h"
#include "Cat.h"
#include "ShowTricks.h"



int main() {
	animal *a = new Dog;
	ShowTrick *st = new JumpTricks();
	ShowTrick *rt = new RunningTrick();
	ShowTrick *et = new EatingTrick();

	a->Accept(st);
	a->Accept(rt);
	a->Accept(et);

	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	animal *a1 = new Cat;
	ShowTrick *st1 = new JumpTricks();
	ShowTrick *rt1 = new RunningTrick();
	ShowTrick *et1 = new EatingTrick();

	a1->Accept(st1);
	a1->Accept(rt1);
	a1->Accept(et1);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	animal *a2 = new Cow;
	ShowTrick *st3 = new JumpTricks();
	ShowTrick *rt3 = new RunningTrick();
	ShowTrick *et3 = new EatingTrick();

	a2->Accept(st3);
	a2->Accept(rt3);
	a2->Accept(et3);

	return 0;
}

