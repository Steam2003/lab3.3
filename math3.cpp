// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -6) // 1 �������
		y = R / 2.;
	else
		if (-6 < x && x <= -2 * R) // 2 �������
			y = -(2 * R * R + R * x) / (-4 * R + 12);
		else
			if (-2 * R < x && x <= 0) // 3,4 �������
				y = sqrt(R * R - pow((x + R), 2));
				else
					if (0 < x && x <= R) // 5,6 �������
						y = -sqrt(pow((R / 2), 2) - pow((x - R / 2), 2));
						else
							y = (R * R - R * x) / 2.; // 7 ������� 
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}