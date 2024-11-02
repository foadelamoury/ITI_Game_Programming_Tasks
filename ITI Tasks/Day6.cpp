#include <iostream>
#include <string>
#include "ComplexNumber.h"
using namespace std;



int main()
{

	ComplexNumber Cn1 = ComplexNumber(1,2);
	ComplexNumber Cn2= ComplexNumber(2, 3);
	ComplexNumber Cn3 = ComplexNumber(1, 2);
	Cn1 = Cn2;
	if (Cn1 == Cn2) 
	{
		ComplexNumber Cn4 = Cn1 + Cn2;
		std::cout << "Addition: " << Cn4.GetRealNumber() << " , " << Cn4.GetImaginaryNumber() << std::endl;
	}

	if (Cn1 != Cn2)
	{
		ComplexNumber Cn5 = Cn1 - Cn2;
		std::cout << "Subtraction: " << Cn5.GetRealNumber() << " , " << Cn5.GetImaginaryNumber() << std::endl;

	}

	std::cout << "Integer " << int(Cn3) << std::endl;
	

return 0;
}
