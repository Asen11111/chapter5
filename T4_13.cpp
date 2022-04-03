/*
 * FileName: T4_13.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function:Mileage of gasoline
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double S=0,s,L=0, l, MGP, TMGP;
	while (1)
	{
		cout << "Enter miles driven:";
		cin >> s;
		if(s== -1)
		{ break; }
		cout << "Enter gallons used:";
		cin >> l;
		MGP = s / l;
		cout << "MGP this trip: " << fixed << setprecision(6) << MGP << endl;
		S += s;
		L += l;
		TMGP = S / L;
		cout << "Total MPG: " << fixed << setprecision(6) << TMGP << endl;
		cout << endl;
	
	}

	return 0;
}
