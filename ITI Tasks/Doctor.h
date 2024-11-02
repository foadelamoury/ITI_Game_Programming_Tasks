#pragma once
#include "Person.h"
#include "MedicalEquipment.h"
#include <vector>

class Doctor : public Person
{
public:
    int YearsOfExperience;
    std::vector<MedicalEquipment> Equipments;

    Doctor(int experience) 
        //: Person(0, 0, 0)
    {
        YearsOfExperience=experience;
    }

    void ExaminePatient();
};

