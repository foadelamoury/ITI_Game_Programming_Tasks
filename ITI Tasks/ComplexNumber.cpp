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
	real=0;
	imaginary=0;
	ComplexNumber::objectCounter++;
	std::cout<<"Hello from "+greetings<<std::endl;
}

ComplexNumber::ComplexNumber(ComplexNumber& clone)
{
	this->real = 0;
	this->imaginary = 0;
	ComplexNumber::objectCounter++;

	std::cout << "Hello Clone" << std::endl;
}


ComplexNumber::~ComplexNumber()
{
	ComplexNumber::objectCounter--;
	std::cout<<"Goodbye Object"<<std::endl;
	std::cout << " Object Counter: " << ComplexNumber::objectCounter << "" << std::endl;

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
