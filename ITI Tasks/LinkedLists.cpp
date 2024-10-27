

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
	Employee* mergeSort(Employee* head);

	void sort() {
		first = mergeSort(first);
	}
};

#pragma endregion

void PrintArray(vector<int>* array)
{
	for (int i = 0; i < array->size(); i++)
	{
		cout << (*array)[i] << " ";
	}
	cout << endl;
}

void Swap(vector<int>* array, int index1, int index2)
{
	int temp = (*array)[index1];
	(*array)[index1] = (*array)[index2];
	(*array)[index2] = temp;
}

#pragma region Sorting Algorithms
void BubbleSort(vector<int>* array)
{
	for (int i = 0; i < array->size(); i++)
	{
		for (int j = i + 1; j < array->size(); j++)
		{
			if ((*array)[i] > (*array)[j])
			{
				Swap(array, i, j);
			}
		}
	}
}




void InsertionSort(vector<int>* array)
{
	for (int i = 1; i < array->size(); i++)
	{
		int key = (*array)[i];
		int j = i - 1;
		while (j >= 0 && (*array)[j] > key)
		{
			(*array)[j + 1] = (*array)[j];
			j--;
		}
		(*array)[j + 1] = key;
	}

}
#pragma	region Merge Sort
Employee* merge(Employee* l1, Employee* l2) {
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;

	if (l1->id <= l2->id) {
		l1->next = merge(l1->next, l2);
		if (l1->next) {
			l1->next->prev = l1;
		}
		l1->prev = NULL;
		return l1;
	}
	else {
		l2->next = merge(l1, l2->next);
		if (l2->next) {
			l2->next->prev = l2;
		}
		l2->prev = NULL;
		return l2;
	}
}

Employee* split(Employee* head) {
	Employee* slow = head;
	Employee* fast = head;

	while (fast->next && fast->next->next) {
		fast = fast->next->next;
		slow = slow->next;
	}

	Employee* temp = slow->next;
	slow->next = NULL;
	if (temp) {
		temp->prev = NULL;
	}

	return temp;
}

Employee* LinkedList::mergeSort(Employee* head) {
	if (head == NULL || head->next == NULL)
		return head;

	Employee* middle = split(head);
	Employee* left = mergeSort(head);
	Employee* right = mergeSort(middle);
	return merge(left, right);
}


#pragma endregion

int BinarySearch(vector<int>* array, int num)
{
	int high = array->size() - 1;
	for (int low = 0; low < array->size();)
	{
		int mid = low + (high - low) / 2;
		if ((*array)[mid] == num)
			return mid;
		if (num < (*array)[mid])
		{
			high = mid - 1;
			continue;
		}
		else
		{
			high = mid + 1;
			continue;
		}
	}
	return -1;


}



int main()
{
#pragma region Sorting and Searching
	vector<int> array = { 10, 9, -2, 7, -30 };
	//PrintArray(&array);
	//BubbleSort(&array);
	//InsertionSort(&array);
	//PrintArray(&array);
	int num = 0;
	//cout<<"Enter number to search for: ";
	//cin>>num;



	//cout<< BinarySearch(&array, -30) << endl;

#pragma endregion
#pragma region LinkedList and Employees
	Employee employee1;
	Employee employee2;
	Employee employee3;
	Employee employee4;


	employee1.SetElements(1, "Mohamed");

	employee2.SetElements(2, "Samer");
	employee3.SetElements(3, "Foad");
	employee4.SetElements(4, "Khaled");


	LinkedList list;
	list.PushBack(&employee2);

	list.PushBack(&employee3);

	list.PushBack(&employee1);



	cout << "List Created" << endl;



	list.printList();


	list.sort();

	list.printList();


	//list.DeleteEmployee(&employee2);
	//cout << "Deleted" << endl;
	//list.printList();

	//list.ReplaceEmployee(1, &employee4);

	//cout << "Replaced" << endl;

	//list.printList();


#pragma endregion

}

