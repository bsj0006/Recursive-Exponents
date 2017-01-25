#include <iostream>

using namespace std;

int rec_multiply(long number1, long number2)
{
	long return_val = 0;
	if (number2 > 0)
	{
		cout << "Multiplying for iteration: ";
		cout << number2 << endl;
		return_val = number1 + rec_multiply(number1, number2 - 1);
	}
	else if (number2 < 0)
	{
		cout << "Multiplying for iteration: ";
		cout << number2 << endl;
		return_val = rec_multiply(number1, number2 + 1) - number1;
	}
	cout << "Multiply returned: " << return_val << endl;
	return return_val;
}

long rec_exponent(int number, int exp)
{
	long return_val = 1;
	if (exp > 0)
	{
		return_val = rec_multiply(number, rec_exponent(number, exp - 1));
	}
	cout << "Power: " << exp << " Exponent returned: " << return_val << endl;
	return return_val;

}

int main(void)
{
	int number1=0, number2=0;
	cout << "Enter two numbers to calculate the exponent: ";
	cin >> number1 >> number2;
	cout << "The exponent of " << number1 << "^" << number2 << " is " << rec_exponent(number1, number2)<<endl;
	system("pause");
	return 0;
}