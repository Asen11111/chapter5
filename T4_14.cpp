/*
 * FileName: T4_14.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:Credit limit problem
 */
#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		double a, b, c, d, e;
		cout << "Enter account number: "; cin >> a; if (a == -1)break;
		cout << "Enter beginning balance: "; cin >> b;
		cout << "Enter total charges: "; cin >> c;
		cout << "Enter total credits: "; cin >> d;
		cout << "Enter credit limt: "; cin >> e;
		cout << "New balance is " << (b + c - d) << endl;
		if ((b + c - d) > e)
		{
			cout << "Account :     " << a << endl;
			cout << "Enter credit limt: " << e << endl;
			cout << "Balance:   " << (b + c - d) << endl;
			cout << "Credit Limit Exceeded." << endl;

		}
	}
	return 0;
}
