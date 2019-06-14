// Fibonacci.cpp 

#include "pch.h"
#include <iostream>

using namespace std;

void fibonacci(int);   // Funct. Prototype

int main()
{
	unsigned long counter;

	cout << "Enter Array's element you want to see: ";
	cin >> counter;
	
	cout << endl << "Fibonacci("<<counter<<") ----> ";
	fibonacci(counter);
	cout << endl << endl;
	

}
void fibonacci(int a)   
{
	int num1, num2;      //0. and 1. elements
	int sum;

	num1 = 0;
	num2 = 1;

	if (a == 0 || a == 1)
	{
		cout << a;
	}
	else
	{
	    for (int i = 0; i < a; i++)
	    {
		   sum = num1 + num2;
		   num1 = num2;
		   num2 = sum;
	    }
		cout << num1;
    }

}

