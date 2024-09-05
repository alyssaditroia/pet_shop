/*
 * dog.hpp
 *
 *  Created on: Mar 13, 2024
 *      Author: alyssaditroia
 */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <iostream>
#include <string>
#include "pet.hpp" // header file for pet class

using namespace std;

class Dog: public Pet { // Declaration of the Dog class, inheriting from the Pet class

public:
	Dog(string nm, int lbs); // Constructor
	// Override the virtual function from the base class
	virtual float CalculateLicensingFee() {
		return dog_licensing_fee * GetWeight();
}

private:
	static float dog_licensing_fee;
};
// Definition of the Dog constructor outside of class using scope op ::
Dog::Dog(string nm, int lbs) :
		Pet(nm, lbs) {}

// Initialization of the static member variable dog_licensing_fee outside of class
float Dog::dog_licensing_fee = 2.0;

#endif /* DOG_HPP_ */
