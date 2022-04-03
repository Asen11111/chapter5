/*
 * FileName: T4_25.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Output asterisk square
 */
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i >= 2 && i <= 4 && j >= 2 && j <= 4)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}
