/*
 * FileName: T4_.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:Sales commission calculator
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	double sum=0, x;
	while (1) 
	{
		cout << "Enter sales in dollars : "; cin >> x; if (x == -1) break; 
		sum =200+ x * 0.09;
		cout << "Salary is: $" <<fixed<<setprecision(2)<< sum << endl;
	}
	return 0;
}
