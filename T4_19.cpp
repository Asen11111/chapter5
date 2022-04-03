/*
 * FileName: T4_19.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Find the two largest numbers
 */
#include<iostream>
using namespace std;
int main()
{
	int number, largest1, largest2;
	int counter[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> number;
		counter[i] = number;
	}
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			int temp = counter[j + 1];
			if (counter[j] > counter[j + 1])
			{
				counter[j + 1] = counter[j];
				counter[j] = temp;
			}
		}
	}
	largest1 = counter[9];
	largest2 = counter[8];
	cout << "The Largest two numbers : " << largest1<<"  "<<largest2 << endl;
	return 0;
}
