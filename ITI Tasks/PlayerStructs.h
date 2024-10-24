#include "LibrariesIncluded.h";
#pragma region Structs
struct Character
{
	string Name;
	int Health;

};

struct Level
{
	int Number;
	int Enemies;
	int Chests;
};

struct Weapon
{
	string Name;
	int Damage;
	int Range;
};

struct Game
{
	int Score;
	string Time;
	Character Player;


};

#pragma endregion

void StructValuesAndSizes();


