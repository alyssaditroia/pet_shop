/*
 * main.cpp
 *
 *  Created on: Mar 13, 2024
 *      Author: alyssaditroia
 */

#include <vector>
#include <string>
#include <iostream>
#include "dog.hpp"
#include "cat.hpp"
#include "pet.hpp"

using namespace std;

/*--------------------------------
 Main where new pets are created
 ---------------------------------*/

int main() {
	float total_fee = 0.0;
	//Creating pet objects
	Dog *d1 = new Dog("Bob", 65);
	Dog *d2 = new Dog("Stan", 37);
	Cat *c1 = new Cat("Tom", 12);

	// vector to hold pointer to pet objects
	vector<Pet*> pvec;
	pvec.push_back(d1); // points to first dog object
	pvec.push_back(d2); // points to second dog object
	pvec.push_back(c1); // points to cat object

	// loop through vector ad print the name and licensing fee
	for (int i = 0; i < pvec.size(); i++) {
		cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateLicensingFee()
				<< endl;
		total_fee = total_fee + pvec[i]->CalculateLicensingFee();
	}
	cout << "Total licensing fee = " << total_fee << endl;

    // Deallocate memory for dynamically alloated objects
    for (int i = 0; i < pvec.size(); i++) {
        delete pvec[i];
    }

	return 0;

}
