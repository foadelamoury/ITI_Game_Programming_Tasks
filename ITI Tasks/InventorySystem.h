#include "LibrariesIncluded.h";
#pragma region Structs
struct Item
{
	string Name;
	int Value;
};
struct Inventory {
	int size;
	Item Items[19];

};
#pragma endregion

void AddItem(Inventory* inventory, int size, string name, int value);

Item GetItem(Inventory* inventory, int index);

