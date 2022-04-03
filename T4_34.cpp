/*
 * FileName: T4_34.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Factorial
 */
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	//4.23(a)
	/*int n, N = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		N *= i;

	}
	cout << N << endl;*/
	//4.34 b
	/*int a[10000]; int n = 1, N = 1, acc;
	cin >> acc;
	for (int k = 0;k < acc; n++,k++)
	{
	
		for (int i = 1; i <= n; i++)
			{
				N *= i;
		
		
			}
		a[k] = N;
		N = 1;
	}
	double e = 1;
	for (int z = 0; z<acc; z++)
	{

		e += 1.0/a[z];
	
	
	cout <<fixed<<setprecision(15)<< e << endl;
	cout << "累加求和项数为： " <<acc<< endl;*/
	//4.34(c)
	double x;
	cin >> x;
	double ex=1;
	int a[1000]; int n = 1, N = 1, acc;
	cout << "Enter the accuracy you want";
	cin >> acc;
	for (int k = 0; k < acc; n++, k++)
	{

		for (int i = 1; i <= n; i++)
		{
			N *= i;


		}
		a[k] = N;
		N = 1;
	}
	for (int z = 0,m=1; z < acc;m++,z++)
	{

		ex +=  (pow(x, m) )/a[z];
	}
	cout << ex << endl;
	cout << "累加求和的项数为： " << acc;
	return 0;
}
