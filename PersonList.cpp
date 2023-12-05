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

string PersonList::getCity(int ssn) {
	PersonNode* temp = head;
	bool found = false;

	while (temp != NULL) {
		if (ssn == temp->data.getSSN()) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	if (found) {
		return(temp->data.getCity());
	}

}

string PersonList::getState(int ssn) {
	PersonNode* temp = head;
	bool found = false;

	while (temp != NULL) {
		if (ssn == temp->data.getSSN()) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	if (found) {
		return(temp->data.getState());
	}

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

bool PersonList::findPerson(int ssn) {
	PersonNode* temp = head;
	bool found = false;

	if (temp == NULL) {
		cout << "There are no voters.\n";
		return found;
	}

	while (temp != NULL) {
		if (ssn == temp->data.getSSN()) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	if (found) {
		cout << "Voter with the SSN '" << ssn << "' exists in our database.\n";
	}
	else {
		cout << "Voter with the SSN '" << ssn << "' doesn't exist in our database.\n";
	}

	return found;
}

void PersonList::editPerson(const int& currentSSN) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "There are no voters.\n";
		return;
	}

	while (temp != NULL) {
		if (currentSSN == temp->data.getSSN()) {
			temp->data.modifyFName();
			temp->data.modifyLName();
			temp->data.modifyEmail();
			temp->data.modifySSN();
			temp->data.modifyAddress();
			temp->data.modifyCity();
			temp->data.modifyState();
			temp->data.modifyGender();
			cout << "Voter with the SSN '" << currentSSN << "' has been updated.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Voter with the SSN '" << currentSSN << "' doesn't exist in our database.\n";
}

void PersonList::deletePerson(const int& ssn) {
	PersonNode* temp = head;

	if (temp == NULL) {
		cout << "There are no voters.\n";
		return;
	}

	while (temp != NULL) {
		if (ssn == temp->data.getSSN()) {
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
			cout << "Voter with the SSN '" << ssn << "' has been removed from our database.\n";
			return;
		}
		temp = temp->next;
	}

	cout << "Voter with the SSN '" << ssn << "' doesn't exist in our database.\n";
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
		cout << "There are no voters.\n";
		return;
	}
	while (temp != NULL) {
		cout << "   Voter " << number << ":   " << "\n name: " << temp->data.getFName() << "  " << temp->data.getLName() << " \n email: " << temp->data.getEmail() << " \n ssn: " << temp->data.getSSN() << " \n address: " << temp->data.getAddress() << " \n city: " << temp->data.getCity() << " \n state: " << temp->data.getState() << " \n gender: " << temp->data.getGender() << endl;
		temp = temp->next;
		number++;
	}
	return;
}

void PersonList::displayPerson(int ssn) {
	PersonNode* temp = head;
	bool found = false;

	if (temp == NULL) {
		cout << "There are no voters in our database.\n";
		return;
	}

	while (temp != NULL) {
		if (ssn == temp->data.getSSN()) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	if (found) {
		cout << "   Voter's information: " << "\n name: " << temp->data.getFName() << "  " << temp->data.getLName() << " \n email: " << temp->data.getEmail() << " \n ssn: " << temp->data.getSSN() << " \n address: " << temp->data.getAddress() << " \n city: " << temp->data.getCity() << " \n state: " << temp->data.getState() << " \n gender: " << temp->data.getGender() << endl;
	}
	else {
		cout << "Voter with the SSN '" << ssn << "' doesn't exist in our database.\n";
	}

	return;
}
