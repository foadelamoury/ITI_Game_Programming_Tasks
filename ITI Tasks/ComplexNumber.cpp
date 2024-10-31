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


ComplexNumber::~ComplexNumber()
{
	std::cout<<"Goodbye Object"<<std::endl;
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
