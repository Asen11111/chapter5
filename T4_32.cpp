/*
 * FileName: T4_32.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function :Judge triangle
 */
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "yes";
	else
		cout << "no";

	return 0;
}
