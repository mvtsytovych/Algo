#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
//28, 16, 7
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
