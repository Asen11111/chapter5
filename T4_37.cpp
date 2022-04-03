/*
 * FileName: T4_37.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: World population growth
 */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	const double bt = 0.02;
	long long sum = 7596934179,sumx,add;
	cout << "年份\t\t" << "该年末预期人口\t\t" << "该年人口增长数量" << endl;
	cout << "2022\t\t" << sum<<"\t\t" << "0" << endl;
	for (int i = 2022,n=1; i <= 2097; i++,n++)
	{
		sumx = sum * pow(1+bt, n);
		add = sumx - sum * pow(1+bt, n - 1);
		cout << i+1 << "\t\t" << sumx << "\t\t" << add << endl;

	}
	cout << "1957年是今年人口数量的两倍" << endl;
	return 0;
}
