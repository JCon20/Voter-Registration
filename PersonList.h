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
		bool findPerson(string fName);
		void editPerson(const string& currentFName);
		void deletePerson(const string& fName);
		void removeFront();
		void displayList();
};
