#include<iostream>
#include "PersonList.h"

using namespace std;




PersonList::PersonList() {
	head = NULL;
	tail = NULL;
}

PersonList::~PersonList() {
	while (!empty()) {
		removeFront();
	}
}

bool PersonList::empty() {
	return (head == NULL);
}

void PersonList::addPerson(PersonInfo person) {
	person.modifyFName();
	person.modifyLName();
	person.modifyEmail();
	person.modifySSN();
	person.modifyAddress();
	person.modifyCity();
	person.modifyState();
	person.modifyGender();
	PersonNode* temp = new PersonNode(person);
	temp->data = person;
	temp->prev = tail;
	temp->next = NULL;

	if (tail == NULL) {
		head = temp;
	}
	else {
		tail->next = temp;
	}
	tail = temp;
	return;
}

bool PersonList::findPerson(string fName) {
	PersonNode* temp = head;
	bool found = false;

	if (temp == NULL) {
		cout << "List is empty\n";
		return found;
	}

	while (temp != NULL) {
		if (fName == temp->data.getFName()) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	if (found) {
		cout << "Person with first name '" << fName << "' found.\n";
	}
	else {
		cout << "Person with first name '" << fName << "' not found.\n";
	}

	return found;
}

void PersonList::editPerson(const string& currentFName) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "List is empty\n";
		return;
	}

	while (temp != NULL) {
		if (currentFName == temp->data.getFName()) {
			temp->data.modifyFName();
			temp->data.modifyLName();
			temp->data.modifyEmail();
			temp->data.modifySSN();
			temp->data.modifyAddress();
			temp->data.modifyCity();
			temp->data.modifyState();
			temp->data.modifyGender();
			cout << "Person with first name '" << currentFName << "' has been updated.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Person with first name '" << currentFName << "' not found.\n";
}

void PersonList::deletePerson(const string& fName) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "List is empty\n";
		return;
	}

	while (temp != NULL) {
		if (fName == temp->data.getFName()) {
			if (temp->prev != NULL) {
				temp->prev->next = temp->next;
			}
			else {
				head = temp->next;
			}

			if (temp->next != NULL) {
				temp->next->prev = temp->prev;
			}
			else {
				tail = temp->prev;
			}

			delete temp;
			cout << "Person with first name '" << fName << "' has been deleted.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Person with first name '" << fName << "' not found.\n";
}

void PersonList::removeFront() {
	if (!empty()) {
		PersonNode* temp = head;
		head = temp->next;
		if (head == NULL) {
			tail = NULL;
		}
		delete temp;
	}
	return;
}


void PersonList::displayList() {
	PersonNode* temp = head;
	int number = 1;
	if (temp == NULL) {
		cout << "List is empty\n";
		return;
	}
	while (temp != NULL) {
		cout << "   Person " << number << ":   " << "name: " << temp->data.getFName() << "  " << temp->data.getLName() << " | email: " <<temp->data.getEmail() << " | ssn: " << temp->data.getSSN() << " | address: " << temp->data.getAddress() << " | city: " << temp->data.getCity() << " | state: " << temp->data.getState() << " | gender: " << temp->data.getGender() << endl;
		temp = temp->next;
		number++;
	}
	return;
}
