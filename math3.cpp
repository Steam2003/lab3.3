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
	double R, R2; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R  = "; cin >> R;
	cout << "R2 = "; cin >> R2;
	cout << "x  = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -6) // 1 �������
		y = R2 / 2.;
	else
		if (-6 < x && x <= -2 * R2) // 2 �������
			y = -(2 * R2 * R2 + R2 * x) / (-4 * R2 + 12);
		else
			if (-2 * R2 < x && x <= 0) // 3,4 �������
				y = sqrt(R2 * R2 - pow((x + R2), 2));
				else
					if (0 < x && x <= R) // 5,6 �������
						y = -sqrt(R*R - (x - R)*(x-R));
						else
							y = (R * R - R * x) / 2.; // 7 ������� 
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}