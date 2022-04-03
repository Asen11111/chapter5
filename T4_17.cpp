/*
 * FileName: T4_17.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:   Find the largest  number
 */
#include<iostream>
using namespace std;
int main()
{
	int number, largest;
	int counter[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> number;
		counter[i] = number;
	}
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < 10- i; j++)
		{
			int temp = counter[j+1];
			if (counter[j] > counter[j + 1])
			{
				counter[j + 1] = counter[j];
				counter[j] = temp;
			}
		}
	}
	largest = counter[9];
	cout << "Largest : " << largest << endl;




	return 0;
}
