#pragma once
#include<iostream>
#include "PersonNode.h"

using namespace std;
class PersonList {

private :
	PersonNode* head;
	PersonNode* tail;


	public:
		PersonList();
		~PersonList();

		bool empty();
		void addPerson(PersonInfo person);
		bool findPerson(string ssn);
		void editPerson(const string& currenSSN);
		void deletePerson(const string& ssn);
		void removeFront();
		void displayList();
		void displayVoter(string ssn);
};
