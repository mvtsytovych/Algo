#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int y, x, eq;
	cout << "Функція y = 3x + 2\n";
	cout << "Введіть y, x\n";
	cin >> y >> x;

	eq = 3 * x + 2;
	
	if (y > eq) {
		cout << "вище лінії";
	}
	else if (y < eq)
	{
		cout << "нижче лінії";
	}
	else {
		cout << "На лінії";
	}
}
