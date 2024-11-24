#include <iostream>

using namespace std;

int main() {
	double celsius;
	double fahrenheit;

	cout << "Degrees Celsius: ";
	cin >> celsius;

	fahrenheit = (9.0 / 5) * celsius + 32;

	cout << fahrenheit << endl;
}