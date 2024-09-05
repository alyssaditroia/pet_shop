/*
 * cat.hpp
 *
 *  Created on: Mar 13, 2024
 *      Author: alyssaditroia
 */

#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include <string>
#include "pet.hpp"

using namespace std;

class Cat: public Pet {

public:
	Cat(string nm, int lbs);
	virtual float CalculateLicensingFee() {
		return cat_licensing_fee * weight;
};

private:
	static float cat_licensing_fee;
};

float Cat::cat_licensing_fee = 1.5;

Cat::Cat(std::string nm, int lbs) :
		Pet(nm, lbs) {}

#endif /* CAT_HPP_ */
