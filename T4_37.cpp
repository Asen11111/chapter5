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
	cout << "���\t\t" << "����ĩԤ���˿�\t\t" << "�����˿���������" << endl;
	cout << "2022\t\t" << sum<<"\t\t" << "0" << endl;
	for (int i = 2022,n=1; i <= 2097; i++,n++)
	{
		sumx = sum * pow(1+bt, n);
		add = sumx - sum * pow(1+bt, n - 1);
		cout << i+1 << "\t\t" << sumx << "\t\t" << add << endl;

	}
	cout << "1957���ǽ����˿�����������" << endl;
	return 0;
}
