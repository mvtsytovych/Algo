#include <iostream>
using namespace std;

//змінна для очистки буфера cin
const int clear_value = 1000;
// задача Begin7
//знайти площу да довжину кола, з заданого радіусу
static int calc_circle_area_length() {
	// декларація постійної PI
	const double pi = 3.14;
	// декларація змінних
	double circle_radius, circle_lenght, circle_area;
	
	while (true) {
		//запрос на введення зміної
		cout << "Введіть радіус: ";
		cin >> circle_radius;
		//Попереджує infinite loop якщо будуть введені не цифри
		if (cin.fail()) {
			cin.clear();
			cin.ignore(clear_value, '\n');
			cout << "Введіть коректне число" << endl;
			continue;
		}
		break;
	}
	
	// розрахунок результату
	circle_lenght = 2 * pi * circle_radius;
	circle_area = pi * (circle_radius * circle_radius);
	// вивід результату
	cout << "Area of rhe circle: " << circle_area
		<< " Circle lenght: " << circle_lenght
		<< endl;
	return 0;
}
// задача Begin37
//Знайти середнє гармонійне а і b
static int calc_harmony() {
	// декларація змінних
	double value_a, value_b, value_res, value_sum_ab;

	while (true) {
		//запрос на введення зміних
		cout << "Введіть а та б" << endl;
		cin >> value_a >> value_b;
		if (cin.fail()) {
			//чистимо буфер cin та повідомляємо користувача
			cin.clear();
			cin.ignore(clear_value, '\n');
			cout << "Виникла помилка, введіть два числа" << endl;
			continue;
		}
		break;
	}

	//розрахунок результату
	value_sum_ab = value_a + value_b;
	value_res = 2 * value_a * value_b;
	value_res = value_res / value_sum_ab;

	//виведення результату
	cout << "Result " << value_res << endl;
	return 0;
}

// Функція перевіряє чи це негативне значення, якщо так повертає value*(-1)
static double check_module(double value) {
	if (value < 0) {
		return value * -1;
	}
	else
	{
		return value;
	}
}
// задача Begin44
static int calc_as_module() {
	//декларуємо char для отримання операції
	//виділив більше ніж 2 для попередження крашу програми у випадку містайпу
	char value_op[10] = "+";
	//декларація змінних
	double value_a, value_b;
	//декларація постійних для визначення операції 
	const char op_plus[] = "+";
	const char op_minus[] = "-";
	const char op_multiply[] = "*";
	const char op_divide[] = "/";
	
	//Infinite loop доки не получимо коректні дані
	while (true) {
		//запрос на введення зміних
		cout << "Введіть дані в форматі [a + b](число оператор число)" << endl;
		cin >> value_a >> value_op >> value_b;
		//перевіряємо чи виникла помилка після отримання значень
		if (cin.fail()) {
			//чистимо буфер cin та повідомляємо користувача
			cin.clear();
			cin.ignore(clear_value, '\n');
			cout << "Виникла помилка, введіть два числа" << endl;
			continue;
		}

		//Згідно обраної операції виводимо результат
		if (op_plus[0] == value_op[0]) {
			cout << "Модуль чисел: " << check_module(value_a + value_b) << endl;
			return 0;
		}
		else if (op_minus[0] == value_op[0]) {
			cout << "Модуль чисел: " << check_module(value_a - value_b) << endl;
			return 0;
		}
		else if (op_multiply[0] == value_op[0]) {
			cout << "Модуль чисел: " << check_module(value_a * value_b) << endl;
			return 0;
		}
		else if (op_divide[0] == value_op[0]) {
			cout << "Модуль чисел: " << check_module(value_a / value_b) << endl;
			return 0;
		}
		else {
			//якщо програма тут значить не була зада коректна операція
			cout << "введіть корректну операцію" << endl;
			continue;
		}
	}
	return 0;
}



int main()
{
	//Декларація зміних для слідкуванням ходу програми
	int func_selection = 0;
	//безкінечний while для перевірки задач
	while (true) {
		//запрос на введення зміної
		cout << "Введіть [7,37,44] для перевірки задач за їх варіантом" << endl;
		cin >> func_selection;
		//Світч функція для вибору задачі для перевірки згідно введеної змінної
		switch (func_selection) {
		case 0:
			cout << "Закриваємо консоль";
			return 0;
		case 7:
			cout << "Задача №7 знайти площу та довжину кола за даним радіусом\n";
			calc_circle_area_length();
			break;
		case 37:
			cout << "Задача №37 середнє гармонійне двох чисел\n";
			calc_harmony();
			break;
		case 44:
			cout << "Задача №44 знайти різницю за модулем двох чисел, викрористовуючи операції [+,-,*,/]\n";
			calc_as_module();
			break;
		default:
			//попередження містайпу
			cout << "Ця задача не імплементована, введіть цифри з даного списку\n[7,37,44]" << endl;
			break;
		}
	}
	return 0;
}

