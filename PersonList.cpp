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
		cout << "The list is currently empty.\n";
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
		cout << "Voter with the first name '" << fName << "' exists in our database.\n";
	}
	else {
		cout << "Voter with the first name '" << fName << "' doesn't exist in our database.\n";
	}

	return found;
}

void PersonList::editPerson(const string& currentFName) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "The list is currently empty.\n";
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
			cout << "Voter with the first name '" << currentFName << "' has been updated.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Voter with the first name '" << currentFName << "' doesn't exist in our database.\n";
}

void PersonList::deletePerson(const string& fName) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "The list is currently empty.\n";
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
			cout << "Voter with th first name '" << fName << "' has been removed from our database.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Voter with the first name '" << fName << "' doesn't exist in our database.\n";
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
		cout << "The list is currently empty.\n";
		return;
	}
	while (temp != NULL) {
		cout << "   Voter " << number << ":   " << "name: " << temp->data.getFName() << "  " << temp->data.getLName() << " \n email: " <<temp->data.getEmail() << " \n ssn: " << temp->data.getSSN() << " \n address: " << temp->data.getAddress() << " \n city: " << temp->data.getCity() << " \n state: " << temp->data.getState() << " \n gender: " << temp->data.getGender() << endl;
		temp = temp->next;
		number++;
	}
	return;
}
