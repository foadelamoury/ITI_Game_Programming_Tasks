#include "ComplexNumber.h"
#include <iostream>
#include <string>
using std::string;



int  ComplexNumber::objectCounter = 0;

ComplexNumber::ComplexNumber()
{
	real = 0;
	imaginary = 0;
	ComplexNumber::objectCounter++;

	std::cout << "Hello ";
}
ComplexNumber::ComplexNumber(int real, int imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
	ComplexNumber::objectCounter++;

}
ComplexNumber::ComplexNumber(string greetings)
{
	real = 0;
	imaginary = 0;
	ComplexNumber::objectCounter++;
	//std::cout << "Hello from " + greetings << std::endl;
}

ComplexNumber::ComplexNumber(const ComplexNumber& clone)
{
	this->real = clone.real;
	this->imaginary = clone.imaginary;
	ComplexNumber::objectCounter++;

	//std::cout << "Hello Clone" << std::endl;
}


ComplexNumber::~ComplexNumber()
{
	ComplexNumber::objectCounter--;
	//std::cout << "Goodbye Object" << std::endl;
	//std::cout << " Object Counter: " << ComplexNumber::objectCounter << "" << std::endl;

}



void ComplexNumber::SetRealNumber(int value)
{
	real = value;
}

void ComplexNumber::SetImaginaryNumber(int value)
{
	imaginary = value;
}




int ComplexNumber::GetRealNumber()
{
	return real;
}

int ComplexNumber::GetImaginaryNumber()
{
	return imaginary;
}


#pragma region Operator Overloading

ComplexNumber ComplexNumber::operator+(ComplexNumber& complexNumber)
{
	
	ComplexNumber result = ComplexNumber(0, 0);

	result.real = real + complexNumber.real;
	result.imaginary = imaginary + complexNumber.imaginary;
	return result;

}
ComplexNumber ComplexNumber::operator-(ComplexNumber& complexNumber)
{
	ComplexNumber result = ComplexNumber(0, 0);

	result.real = real - complexNumber.real;
	result.imaginary = imaginary - complexNumber.imaginary;
	return result;

}
ComplexNumber ComplexNumber::operator=(ComplexNumber& complexNumber)
{
	ComplexNumber result = ComplexNumber(0, 0);

	result.real = real = complexNumber.real;
	result.imaginary = imaginary = complexNumber.imaginary;
	 return result;

}

#pragma endregion
#pragma region Boolean Operator Overloading

bool ComplexNumber::operator==(ComplexNumber& complexNumber)
{
	if(real == complexNumber.real && imaginary == complexNumber.imaginary)
	{
		return true;
	}
		return false;

}
bool ComplexNumber::operator!=(ComplexNumber& complexNumber)
{
	if (real != complexNumber.real || imaginary != complexNumber.imaginary)
	{
		return true;
	}
	return false;

}
ComplexNumber::operator int()
{
	return real+imaginary;
}
#pragma endregion

