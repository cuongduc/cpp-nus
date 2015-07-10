#include <iostream>
using namespace std;

void cast();
void ascii_code();
void escape_sequence();

int main() {

	cast();
	ascii_code();
	escape_sequence();

	return 0;
}

void cast() {
	char ch(99);

	cout << ch << endl;
	// ch is not affected by static_cast
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;
}

void ascii_code() {
	char ch;

	cout << "Input a character: ";
	cin >> ch;
	cout << ch << " has ASCII code: " << static_cast<int>(ch) << endl;

}

void escape_sequence() {
	cout << "\"This is a quote\"" << endl;
	cout << "The last letter should be deleted \b" << endl;
	cout << "6F in hexa is \'\x6F\'" << endl;
}