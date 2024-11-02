#pragma once
#include "Person.h"
#include "Doctor.h"
#include "Medecine.h"
class Patient : public Person
{
public:

	std::vector<Medecine> Meds;

	Doctor* doctor;

	Patient(int Age, int Height, int Weight, Doctor* Dr)
		//: Person(0, 0, 0)
	{
		age = Age;
		height = Height;
		weight = Weight;
		doctor= Dr;
	}
		void DescribePain();
		




};

