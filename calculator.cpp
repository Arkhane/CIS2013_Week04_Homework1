#include <iostream>
#include <cmath>

using namespace std;

double firstNumber;
double secondNumber;
double result;
char op;
bool keepRunning = true;
char question = 'y';





void calculator()
{
	while (keepRunning)
	{

		cout << "Enter a first number: \n";
		cin >> firstNumber;

		cout << "Enter operator +,-,*,/,%,sqrt: \n";
		cin >> op;

		cout << "Enter a second number: \n";
		cin >> secondNumber;


		if (op == '+')
		{
			result = firstNumber + secondNumber;
		}

		if (op == '-')
		{
			result = firstNumber - secondNumber;
		}

		if (op == '*')
		{
			result = firstNumber * secondNumber;
		}

		if (op == '/')
		{
			result = firstNumber / secondNumber;
		}

		if (op == '%')
		{
			result = firstNumber % secondNumber;
		}

		if (op == 'sqrt')
		{
			result = sqrt(a);
		}



		cout << "Your result is: " << result;

		cout << "\nDo you want to calculate agian? (y/n): ";
		cin >> question;
		if (question != 'y')
		{
			keepRunning = false;
		}
	}
}



int main()
{
	
	calculator();

	
	

	return 0;
}
