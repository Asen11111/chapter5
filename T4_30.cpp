/*
 * FileName: T4_30.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Calculate the diameter, perimeter, and area of a circle
 */
#include<iostream>
using namespace std;
int main()
{
	const double p =3.14159;
	double r, R, l, s;
	cin >> r;
	R = 2 * r;
	l = 2 * p* r;
	s = p * r * r;
	cout << "直径= " << R << endl;
	cout << "周长= " << l << endl;
	cout << "面积= " << s << endl;




	return 0;
}
