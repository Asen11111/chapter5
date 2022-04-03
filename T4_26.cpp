/*
 * FileName: T4_26.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Determine whether a number is a palindrome number
 */
#include<iostream>
using namespace std;
int main()
{
	char a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a == e && b == d)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
