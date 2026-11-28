#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b;
	cin>>a>>b;

	cout << "\nAddition: " << a + b;
	cout << "\nSubtraction: " << a - b;
	cout << "\nMultiplication: " << a * b;

	if (b != 0)
		cout << "\nDivision: " << a / b;
	else
		cout << "\nDivision: Not possible";

	cout << "\nPower: " << pow(a, b);

	return 0;
}
