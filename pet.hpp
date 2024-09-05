/*
 * pet.hpp
 *
 *  Created on: Mar 13, 2024
 *      Author: alyssaditroia
 */

#ifndef PET_HPP_ // Header guard to prevent multiple inclusion of the header file
#define PET_HPP_

#include <string> // Include the string library for string manipulation
#include <iostream> // Include the iostream library for input and output operations

using namespace std; // Using the standard namespace to avoid specifying it for standard library components

class Pet { // Declaration of the Pet class

public: // member functions
    // Constructors
	Pet(); // Default constructor
	Pet(string nm, int lbs) : // Parameterized constructor with member initializer list
			pet_name(nm), weight(lbs) {}
    // Destructor
	virtual ~Pet() {}
    // Setter and getter functions for pet_name
	void SetName(string nm) {pet_name = nm;}
	string GetName() const { return pet_name;}

    // Setter and getter functions for weight
	void SetWeight(int lbs) {weight = lbs;}
	int GetWeight() const {return weight;}

    // Pure virtual function to calculate licensing fee, to be implemented by derived classes
	virtual float CalculateLicensingFee() = 0;

    // Static member function to get the count of Pet objects created
	static int GetPetCount() { return pet_count;}

protected: // Protected allows derived class to inherit variables
	string pet_name; // Name of the pet
	int weight; // Weight of the pet
    // Static member variable to keep track of the number of Pet objects created
	static int pet_count;
};

// Initialization of the static member variable pet_count outside of the class using ::
int Pet::pet_count = 0;

#endif /* PET_HPP_ */

