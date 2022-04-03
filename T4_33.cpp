/*
 * FileName: T4_33.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function :Judge right triangle
 */
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		cout << "yes";
	else
		cout << "no";




	return 0;
}
