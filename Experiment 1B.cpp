// Write a program that accepts as input the mass, in grams, 
// and density, in grams per cubic centimeters, 
// and outputs the volume of the object using the formula: density ¼ mass / volume. 
// Format your output to two decimal places.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
	double grams, density, volume;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Enter the Following: " << endl;
	cout << "Mass (grams): ";
	cin >> grams;
	cout << "Density (grams in cubic centimeters): ";
	cin >> density;
	volume =  grams / density;		
	cout << "Volume: " << volume << " cubic centimeters" << endl;
	
	-getch();
	return 0;
}
