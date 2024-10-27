

#include <iostream>
#include <vector>

using namespace std;

#pragma region Structs

struct Employee {
	int id;
	string name;
	Employee* next = NULL;
	Employee* prev = NULL;

	void PrintEmployee() {
		cout << "ID: " << id << " Name: " << name << endl;
	}

	void SetElements(int id, string name) {
		this->id = id;
		this->name = name;
	}
};

struct LinkedList {
	Employee* first = NULL;
	Employee* lastInserted = NULL;

	void PushBack(Employee* employee) {
		if (first == NULL) {
			first = employee;
			lastInserted = employee;
		}
		else {
			lastInserted->next = employee;
			employee->prev = lastInserted;
			lastInserted = employee;
		}
	}

	void printList() {
		Employee* current = first;
		while (current != NULL) {
			current->PrintEmployee();
			current = current->next;
		}
	}

	void DeleteEmployee(Employee* employee) {
		if (employee == NULL) return;

		if (employee->prev != NULL) {
			employee->prev->next = employee->next;
		}
		else {
			first = employee->next;
		}

		if (employee->next != NULL) {
			employee->next->prev = employee->prev;
		}
		else {
			lastInserted = employee->prev;
		}

		employee = NULL;
	}

	Employee* findEmployee(int id) {
		Employee* current = first;
		while (current != NULL) {
			if (current->id == id) {
				cout << "Employee found: " << endl;
				return current;
			}
			current = current->next;
		}
		cout << "Employee not found." << endl;
		return NULL;
	}

	void ReplaceEmployee(int id, Employee* newEmployee) {
		Employee* employee = findEmployee(id);
		if (employee == NULL) return;

		if (employee->prev != NULL) {
			employee->prev->next = newEmployee;
			newEmployee->prev = employee->prev;
		}
		else {
			first = newEmployee;
		}

		if (employee->next != NULL) {
			employee->next->prev = newEmployee;
			newEmployee->next = employee->next;
		}
		else {
			lastInserted = newEmployee;
		}
		employee = NULL;
	}
};

#pragma endregion



void MergeSort(LinkedList* list)
{



}

int main()
{
#pragma region LinkedList and Nodes
	Employee employee1;
	Employee employee2;
	Employee employee3;
	Employee employee4;



	employee1.SetElements(1, "Mohamed");
	employee2.SetElements(2, "Samer");
	employee3.SetElements(3, "Foad");
	employee4.SetElements(4, "Khaled");


	LinkedList list;
	list.PushBack(&employee1);
	list.PushBack(&employee2);
	list.PushBack(&employee3);

	cout << "List Created" << endl;

	list.printList();




	list.DeleteEmployee(&employee2);
	cout << "Deleted" << endl;
	list.printList();

	list.ReplaceEmployee(1, &employee4);

	cout << "Replaced" << endl;

	list.printList();


#pragma endregion

}

