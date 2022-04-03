/*
 * FileName: T4_28.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Asterisk checkerboard pattern
 */
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 8;i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			if (i % 2 == 0 && j == 1)
			{
				cout << " ";
				cout << "*";
			}
			else
				cout << "*";
		}
		cout << endl;	
	}
	return 0;
}
