/**
 * Small demonstration on fixed-width integer
 *
 * Key point: avoid to use unsigned 
 */
#include <iostream>
#include <cstdint>
using namespace std;

/**
 * this function accepts only unsigned int
 * @param x [description]
 */
void done(unsigned int x) {
	for (int i = 0; i < x; i++)
		cout << "i: " << i << " , x: " << x << endl; 
}

int main() {
	// in g++: used -std=c++11 to avoid warning
	// and error messages
	int16_t i(5);	// implicite assignment
	cout << "i = " << i << "; size: " << sizeof(i) << endl;

	// pass negative integer to 'done' causes
	// unexpected behavior: the code is likely to run forever
	// (maybe -1 is converted to very large integer)
	done(-1);

	return 0;
}