#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;

int main() {
	int x, y, eq;
	cout << "Введіть y, x\n";
	cin >> y>> x;

	eq = 3 * x + 2;

	if (y > eq) {
		cout << "вище прямої";
	}
	else if (y < eq)
	{
		cout << "нище прямої";
	}
	else {
		cout << "на прямії";
	}
	
}
