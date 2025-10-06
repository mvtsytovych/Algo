#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;

int main() {
	int x, y, eq;
	cin >> y>> x;

	eq = 3 * x + 2;

	if (y > eq) {
		cout << "вище прямої";
	}
	else if (eq < x)
	{
		cout << "нище прямої";
	}
	else {
		cout << "на прямії";
	}
	
}
