// final1dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
class BigNumbers
{
public:
	vector<long long> vec;
public:
	void operatoradd(int num1, int num2)
	{
		vec.push_back(num1);
		vec.push_back(num2);
		int add = num1 + num2;
		cout << "\nAddition is: " << add << endl;
	}
	void operatorsub(int num1, int num2)
	{
		int sub = num1 - num2;
		vec.push_back(num1);
		vec.push_back(num2);
		cout << "\nSubstraction is: " << sub << endl;
	}
	void operatormult(int num1, int num2)
	{
		int MULTIPLY = num1 * num2;
		vec.push_back(num1);
		vec.push_back(num2);
		cout << "\nMultipliication is: " << MULTIPLY << endl;
	}
	void operatordiv(int num1, int num2)
	{
		int DIVIDE = num1 / num2;
		vec.push_back(num1);
		vec.push_back(num2);
		cout << "\nDivision is: " << DIVIDE << endl;
	}
	void operatormod(int num1, int num2)
	{
		int MOD = num1 % num2;
		vec.push_back(num1);
		vec.push_back(num2);
		cout << "\nMod :" << MOD << endl;
	}
};
int main()
{
	BigNumbers obj;
	obj.operatoradd(10, 20); //add
	obj.operatorsub(45, 30); //subtract
	obj.operatormult(10, 10); //multiply
	obj.operatordiv(64, 4); //divide
	obj.operatormod(100, 10); //mod


	return 0;
}

