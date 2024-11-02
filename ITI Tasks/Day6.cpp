#include <iostream>
#include <string>
#include "ComplexNumber.h"
#include "Doctor.h"
#include "Patient.h"
#include "Medecine.h"
#include "Organ.h"
#include "MedicalEquipment.h"





int main()
{
#pragma region ComplexNumber
	ComplexNumber Cn1 = ComplexNumber(1,2);
	ComplexNumber Cn2= ComplexNumber(2, 3);
	ComplexNumber Cn3 = ComplexNumber(3, 2);

	if (Cn1 != Cn2)
	{
		ComplexNumber Cn5 = Cn1 - Cn2;
		std::cout << "Subtraction: " << Cn5.GetRealNumber() << " , " << Cn5.GetImaginaryNumber() << std::endl;

	}
	Cn1 = Cn2;

	if (Cn1 == Cn2) 
	{
		ComplexNumber Cn4 = Cn1 + Cn2;
		std::cout << "Addition: " << Cn4.GetRealNumber() << " , " << Cn4.GetImaginaryNumber() << std::endl;
	}


	std::cout << "Integer " << (int)Cn3<< std::endl;

#pragma endregion

#pragma region Bonus Overload Operator
	
	std::cout << "Complex Number: " << (Cn3++).GetRealNumber() << " + " << (Cn3).GetImaginaryNumber() << " i " << std::endl;

	std::cout << "Complex Number: " << (Cn3).GetRealNumber() << " + " << (Cn3).GetImaginaryNumber() << " i " << std::endl;

	std::cout << "Complex Number: " << (--Cn3).GetRealNumber() << " + " << (Cn3).GetImaginaryNumber() << " i " << std::endl;

#pragma endregion

#pragma region Aggregation, Association, Composition, Inheritance
	Medecine M1= Medecine("Panadol",12);
	Doctor D1 = Doctor(5);
	MedicalEquipment ME1 = MedicalEquipment();
	Patient P1 = Patient(20, 5, 10,&D1);
	
	D1.Equipments.push_back(ME1);
	P1.Meds.push_back(M1);

	std::cout << P1.Meds[0].name << std::endl;
	D1.ExaminePatient();
#pragma endregion

return 0;
}
