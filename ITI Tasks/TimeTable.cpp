#include "./LibrariesIncluded.h"
int TimeTable(int number, int maxMultiplication)
{
	if (maxMultiplication > 0)
	{
		cout << "5 * " << maxMultiplication << " = " << number * maxMultiplication << endl;

		
		return TimeTable(number, maxMultiplication - 1);

	}
	else
	{
		cout << "5 * " << maxMultiplication << " = ";
		return 0;
	}
}
