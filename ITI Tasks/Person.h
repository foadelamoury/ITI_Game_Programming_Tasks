#pragma once
#include <iostream>
#include <vector>
#include "Organ.h"

class Person{
public:
	//Person();
	//Person(int age, int height, int weight) ;

	int age;
	int height;
	int weight;
	std::vector<Organ> organs;

};

