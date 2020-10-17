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
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6) // 1 участок
		y = R / 2.;
	else
		if (-6 < x && x <= -2 * R) // 2 участок
			y = -(2 * R * R + R * x) / (-4 * R + 12);
		else
			if (-2 * R < x && x <= 0) // 3,4 участок
				y = sqrt(R * R - pow((x + R), 2));
				else
					if (0 < x && x <= R) // 5,6 участок
						y = -sqrt(pow((R / 2), 2) - pow((x - R / 2), 2));
						else
							y = (R * R - R * x) / 2.; // 7 участок 
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}