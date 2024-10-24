#include "./LibrariesIncluded.h";
#include "./InventorySystem.h";
#include "./TimeTable.h";

#include "./PowerAndFactorial.h";
#pragma region Challenge 1
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
void StructValuesAndSizes()
{
	Game Game1;
	Game1.Score = 0;
	Game1.Time = "10:30";
	Game1.Player.Health = 100;
	Game1.Player.Name = "G-Man";

	Character Enemy;

	Enemy.Health = 100;
	Enemy.Name = "Freeman";


	Level Level1;

	Level1.Enemies = 5;
	Level1.Number = 1;
	Level1.Chests = 3;

	cout << "size of Game is: " << sizeof(Game1) << endl;
	cout << "size of Level is: " << sizeof(Level1) << endl;
	cout << "size of Enemy is: " << sizeof(Enemy) << endl;
	cout << "size of Player is: " << sizeof(Game1.Player) << endl;
}
#pragma endregion
int main()
{
#pragma region Challenge 1
	StructValuesAndSizes();
#pragma endregion
#pragma region Challenge 2

#pragma region part 1
	cout << "Time Table of 5 " << endl;
	int number = 5;
	int maxMultiplication = 10;
	cout <<TimeTable(number, maxMultiplication) << endl << endl;
#pragma endregion
#pragma region part 2
	int number2 = 3;
	int number3 = 4;

	cout << PowerWithoutPointer(number2, 2)<<endl;

	PowerWithPointer(&number2, 2);
	cout << endl;
	cout <<FactorialWithoutPointer	(number3);
	cout << endl << endl;
	 FactorialWithPointer(&number3);

	 cout << endl << endl;

	

#pragma endregion

#pragma region part 3

	Inventory inventory;
	inventory.size = 10;
	AddItem(&inventory, 10, "sword", 1000);
	AddItem(&inventory, 10, "bow", 500);
	AddItem(&inventory, 10, "health potion", 800);
	AddItem(&inventory, 10, "mana potion", 200);
	AddItem(&inventory, 10, "torch", 50);
	AddItem(&inventory, 10, "axe", 20);
	AddItem(&inventory, 10, "hammer", 40);


	cout<<"Inventory:" << endl << endl;
	for (int i = 0; i < inventory.size; i++)
		if (inventory.Items[i].Name != "")
			cout << inventory.Items[i].Name << " " << inventory.Items[i].Value << endl;

	GetItem(&inventory, 2);
#pragma region part 3

#pragma endregion

	return 0;
}