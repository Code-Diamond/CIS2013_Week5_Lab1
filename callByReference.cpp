#include <iostream>

using namespace std;

int addNumbers(int&, int);

int main()
{

		int firstNumber, secondNumber;
		cout << "Enter first number: "; cin >> firstNumber;
		cout << "Enter second number: "; cin >> secondNumber;
			//demonstrates call by reference and pointers
		cout << "The first result of calling addNumbers is: " << addNumbers(firstNumber, secondNumber) << endl;
		cout << "The second result of calling addNumbers is: " << addNumbers(firstNumber, secondNumber) << endl;
		cout << "The third result of calling addNumbers is: " << addNumbers(firstNumber, secondNumber) << endl;
	return 0;
}


int addNumbers(int& x, int y)
{
	return x += y;
}