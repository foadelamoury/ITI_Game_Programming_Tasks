#include <string>
#pragma once
class Medecine
{

public:
	std::string name;
	int price;

	Medecine(std::string name, int price)
	{
		this->name = name;
		this->price = price;
	}

};

