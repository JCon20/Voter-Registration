#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <limits>
#include <string>

#include "PersonList.h"
#include "PersonInfo.h"
#include "RegistrarEmployee.h"

using namespace std;

void sendInfo();
void recieveInfo(string fName, string lName, string email, string ssn, string address, string city, string state, string gender);
void getUserInput(string fName, string lName, string email, string ssn, string address, string city, string state, string gender);

void pressAnyKey();

int main() {
	PersonList PersonList;

	pressAnyKey();


	int choice = 0;
	bool keepGoing = true;
	while (keepGoing) {
		cout << endl
			<< "---------------------------------------------------------------------\n"
			<< " Thank you for using our voter registration system!\n"
			<< " Select an option from the menu below\n"
			<< " by entering the number of the choice\n"
			<< "---------------------------------------------------------------------\n"
			<< "\t1\tAdd new voter information to our database.\n"
			<< "\t2\tCheck our system for an existing voter.\n"
			<< "\t3\tChange information for an existing voter.\n"
			<< "\t4\tRemove an existing voter from our database.\n"
			<< "\t5\tDisplay our voter database.\n"
			<< "\t6\tSend Voter to Registrar Employee\n"
			<< "\t7\tEnd program\n"
			<< "---------------------------------------------------------------------\n\n"
			<< "Enter your choice : ";

		cin >> choice;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\tOnly integer input please!. \n";
			pressAnyKey();
			continue;
		}

		std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		switch (choice) {

		case 1:
		{
			PersonInfo tempPerson;
			PersonList.addPerson(tempPerson);
			pressAnyKey();
			break;
		}
		case 2:
		{
			string fName;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the voter's First Name: ";
			std::getline(std::cin, fName);
			PersonList.findPerson(fName);
			pressAnyKey();
			break;
		}
		case 3:
		{
			string currentName;

			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the first name for the voter you want to change: ";
			std::getline(std::cin, currentName);
			PersonList.editPerson(currentName);
			pressAnyKey();
			break;
		}
		case 4:
		{
			string fName;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the first name of the voter you want to remove: ";
			std::getline(std::cin, fName);

			PersonList.deletePerson(fName);
			pressAnyKey();
			break;
		}
		case 5:
		{
			PersonList.displayList();
			pressAnyKey();
			break;
		}
		
		case 6:
		{
			string fName;
			bool find;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the first name of the voter you want to send to the Registrar Employee: ";
			std::getline(std::cin, fName);

			find = PersonList.findPerson(fName);
			if (find) {
				std::cout << "Voter " << fName << " Sent to Registrar Employee" << std::endl;
			}
			else {
				std::cout << "Voter " << fName << " cannot be sent" << std::endl;
			}

			pressAnyKey();
			break;
		}
		case 7:
		{
			std::cout << "The program is now ending." << std::endl;
			keepGoing = false;
			pressAnyKey();
			break;
		}
		default:
		{
			cout << "That option is currently not available\n";
			pressAnyKey();
			break;
		}
		}
	}

	return 0;
	
}

void pressAnyKey() {
	char ch = '\0';
	cout << "Press any key to continue" << endl << endl;
	ch = _getch();
	system("cls");
	return;
}
