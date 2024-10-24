#include "PowerAndFactorial.h"

int PowerWithoutPointer(int number, int power)
{
	for(int i = 0; i < power; i++)
	{
		number *= number;
	}
	return number;
}

void PowerWithPointer(int* number, int power)
{
	for(int i = 0; i < power; i++)
	{
		*number *= *number;
	}
	cout<<*number;

}

int FactorialWithoutPointer(int number) {
	int result = 1;  
	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	return result;
}


void FactorialWithPointer(int* number) {
	int result  = 1;  
	for (int i = 1; i <= *number; i++) {
		result *= i;
	}
	*number = result;  // Update the number at the pointer with the result
	cout << *number;
}

