// Programmer Name: Sophia Bhoria
// Student ID: 18240287
// Section: 303
// Date: Sept 03, 2024
// File: lab2.cpp
// Purpose: calculate and output a computed gravitational force on a particular planet when the user inputs the mass of the first body and the second body with a distance

#include <iostream>
using namespace std;

int main()
{
	const float Gravitational_constant = 6.674E-11;

	cout << "Hello User! Welcome to the Gravitational Force Calculator" << endl;

	float Mass_one;
	cout << "Please input the first mass: " << endl;
	cin >> Mass_one;

	float Mass_two;
	cout << "Please input the second mass: " << endl;
	cin >> Mass_two;

	float distance;
	cout << "Please input the distance between the masses: " << endl;
	cin >> distance;

	float gravitational_force;
	gravitational_force = Gravitational_constant * ((Mass_one * Mass_two)/(distance * distance));
	cout << "The computed gravitational force is: "<< gravitational_force << endl;

	return 0;
}
 
