/*
 * FileName: T4_16.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Salary calculator
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double h, r,o, s;
	while (1)
	{
		cout << "Enter hours worked :"; cin >> h; if (h == -1)break;
			cout << "Enter hourly rate of the employee :"; cin >> r;
		if (h > 40)
		{
			o = h - 40;
			s = 40 * r + o * r * 1.5;
		}
		else
			s = h * r;
		cout << fixed << setprecision(2) << "Salary is $" << s << endl;
	}

	return 0;
}
