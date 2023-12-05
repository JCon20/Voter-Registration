#pragma once
#include<iostream>
#include "PersonNode.h"

using namespace std;
class PersonList {

private:
	PersonNode* head;
	PersonNode* tail;


public:
	PersonList();
	~PersonList();

	string getCity(int ssn);
	string getState(int ssn);

	bool empty();
	void addPerson(PersonInfo person);
	bool findPerson(int ssn);
	void editPerson(const int& currenSSN);
	void deletePerson(const int& ssn);
	void removeFront();
	void displayList();
	void displayPerson(int ssn);
};
