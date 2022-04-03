/*
 * FileName: T4_36.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:Crack the password
 */
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, num;
	cin >> num;
	d = num % 10;
	c = num / 10 % 10;
	b = num / 100 % 10;
	a = num / 1000;
	int e[4] = { a,b,c,d };
	
	for (int i = 0; i <= 4; i++)
	{
		if (e[i] == 8 || e[i] == 9)
			e[i] -= 7;
		if (e[i] >= 0 && e[i] <= 6)
			e[i] += 3;
	}
	a = e[2]; b = e[3]; c = e[0]; d = e[1];
	cout << (a * 1000 + b * 100 + c * 10 + d) << endl;

return 0;
}