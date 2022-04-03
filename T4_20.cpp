/*
 * FileName: T4_20.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function Confirm the validity of user input
 */
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	while (i)
	{
		cin >> n;
		if (n != 1 && n != 2)
			i = 1;
		else
			i = 0;

	}
	return 0;
}
