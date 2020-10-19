// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R, R2; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R  = "; cin >> R;
	cout << "R2 = "; cin >> R2;
	cout << "x  = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6) // 1 участок
		y = R2 / 2.;
	else
		if (-6 < x && x <= -2 * R2) // 2 участок
			y = -(2 * R2 * R2 + R2 * x) / (-4 * R2 + 12);
		else
			if (-2 * R2 < x && x <= 0) // 3,4 участок
				y = sqrt(R2 * R2 - pow((x + R2), 2));
				else
					if (0 < x && x <= R) // 5,6 участок
						y = -sqrt(R*R - (x - R)*(x-R));
						else
							y = (R * R - R * x) / 2.; // 7 участок 
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}