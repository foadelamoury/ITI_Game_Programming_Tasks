#include <string>
class ComplexNumber
{
private:
	int real, imaginary;

public:

	static int objectCounter;


	ComplexNumber();

	ComplexNumber(const ComplexNumber& complexNumber);
	ComplexNumber(int real, int imaginary);
	ComplexNumber(std::string greetings);
	int GetRealNumber();
	int GetImaginaryNumber();
	void SetRealNumber(int value);

	void SetImaginaryNumber(int value);

#pragma region Operator Overloading
	ComplexNumber operator+(ComplexNumber& complexNumber);
	ComplexNumber operator-(ComplexNumber& complexNumber);
	ComplexNumber operator=(ComplexNumber& complexNumber);

#pragma endregion
#pragma region Boolean Operator Overloading

	bool operator==(ComplexNumber& complexNumber);
	bool operator!=(ComplexNumber& complexNumber);
#pragma endregion

#pragma region Casting Overloading

	explicit operator int();
#pragma endregion



	~ComplexNumber();

};

