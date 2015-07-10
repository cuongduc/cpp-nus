/**
 * This demonstrates some concepts related to
 * floating-point numbers
 */
#include <iostream>
#include <iomanip>		// for std::setprecision

using namespace std;

// Scientific numbers
void scinum();

// Rouding error
void rouding();

// Special numbers
void special();

int main() {

	scinum();
	rouding();
	special();

	return 0;	
}

void scinum() {
	cout << "5e-15 = " << 5e-15 << endl;
	cout << setprecision(11);	// show 11 digits
	float f = 3.12456789123456789123456f; // show: 3.1245679855
	cout << f << endl;
	double d = 3.12456789123456789123456; // show: 3.1245678912
	cout << d << endl;
}

void rouding() {
	double d(0.1);
	cout << d << endl;
	cout << setprecision(17);
	cout << d << endl;
}

void special() {
	double zero = 0.0;
	double posinf = 5.0 / zero;
	cout << posinf << endl;

	double neginf = -5.0 / zero;
	cout << neginf << endl;

	double nan = zero / zero;	// mathematically invalid
	cout << nan << endl;
}