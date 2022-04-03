/*
 * FileName: T4_27.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 18th, 2022
 * College:  Computer  science of Henan University
 * Function: Binary to decimal
 */
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    long long sum = 0, len;
    string n;
    cin >> n;
    len = n.size();

    for (int i = 0; i < len; i++)
    {
        sum += ((long long)(n[i])- 48)* pow(2, len - 1 - i);
    }

        cout << sum << endl;
    
    return 0;
}