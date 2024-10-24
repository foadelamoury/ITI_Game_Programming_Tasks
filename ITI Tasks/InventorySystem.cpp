#include "./InventorySystem.h";



void AddItem(Inventory* inventory, int size, string name, int value)
{
	for (int i = 0; i < inventory->size; i++)
	{
		if (inventory->Items[i].Name == "")
		{
			inventory->Items[i].Name = name;
			inventory->Items[i].Value = value;
			break;
		}

	}
}

Item GetItem(Inventory* inventory, int index)
{
	return inventory->Items[index];
}