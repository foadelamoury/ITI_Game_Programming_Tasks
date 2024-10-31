#include <string>
class ComplexNumber
{
	private:
	int real, imaginary;
	
public:

	static int objectCounter;


	ComplexNumber();

	ComplexNumber(ComplexNumber& complexNumber);
	ComplexNumber(int real, int imaginary);
	ComplexNumber(std::string greetings);
	int GetRealNumber();
	int GetImaginaryNumber();
	void SetRealNumber(int value);

	void SetImaginaryNumber(int value);

	~ComplexNumber();

};

