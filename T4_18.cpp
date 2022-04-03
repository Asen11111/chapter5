/*
 * FileName: T4_18.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:  Table output
 */
#include<iostream>
using namespace std;
int main()
{
	int i = 5, a = 1;
	cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N\t" << endl;
	cout << endl;
	while (i)
	{
		cout << a << "\t" << 10 * a << "\t" << 100 * a << "\t" << 1000 * a << "\t" << endl;
		a++;
		i--;

	}




	return 0;
}
