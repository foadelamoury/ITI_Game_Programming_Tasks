#include "../ITI Tasks/ComplexNumber.h"
#include <iostream>
#include <string>
using std::cout;

using std::string;

using std::endl;


#pragma region Adding and Subtracting Complex Numbers
ComplexNumber AddingTwoComplexNumbers(ComplexNumber c1, ComplexNumber c2)
{
	ComplexNumber c3 = ComplexNumber(c1.GetRealNumber() + c2.GetRealNumber(), c1.GetImaginaryNumber() + c2.GetImaginaryNumber());
	return c3;
}
ComplexNumber SubtractingTwoComplexNumbers(ComplexNumber c1, ComplexNumber c2)
{
	ComplexNumber c3 = ComplexNumber(c1.GetRealNumber() - c2.GetRealNumber(), c1.GetImaginaryNumber() - c2.GetImaginaryNumber());

	return c3;

}
#pragma endregion
int main()
{


	ComplexNumber c1(7, 4);
	ComplexNumber c2(12, 10);

	

#pragma region Adding and Subtracting Complex Numbers


	ComplexNumber c3 = AddingTwoComplexNumbers(c1, c2);

	cout<<" complex numbers addition: "<<c3.GetRealNumber()<<" + "<<c3.GetImaginaryNumber()<<"i"<<endl;


	ComplexNumber c4 = SubtractingTwoComplexNumbers(c1, c2);

	cout << " complex numbers subtraction: " << c4.GetRealNumber() << " - " << c4.GetImaginaryNumber() << "i" << endl;

#pragma endregion

	cout << " Object Counter: " << ComplexNumber::objectCounter << "" << endl;
	return 0;
}
