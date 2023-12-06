#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <limits>
#include <string>

#include "PersonList.h"
#include "PersonInfo.h"
#include "RegistrarEmployee.h"
#include "Government.h"

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
			<< "\t6\tDisplay voter.\n"
			<< "\t7\tSend Voter to Registrar Employee.\n"
			<< "\t8\tVerify Voter Eligibility.\n"
			<< "\t9\tEnd program\n"
			<< "---------------------------------------------------------------------\n\n"
			<< "Enter your choice : ";

		cin >> choice;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\tOnly integer input please. \n";
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
			int ssn;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the voter's SSN: ";
			std::cin >> ssn;
			PersonList.findPerson(ssn);
			pressAnyKey();
			break;
		}
		case 3:
		{
			int currentSSN;

			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the SSN for the voter you want to change: ";
			std::cin >> currentSSN;
			PersonList.editPerson(currentSSN);
			pressAnyKey();
			break;
		}
		case 4:
		{
			int ssn;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the SSN of the voter you want to remove: ";
			std::cin >> ssn;

			PersonList.deletePerson(ssn);
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
			int ssn;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the voter's SSN to view their information: ";
			std::cin >> ssn;
			PersonList.displayPerson(ssn);
			pressAnyKey();
			break;
		}

		case 7:
		{
			int ssn;
			bool find;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the SSN of the voter you want to send to the Registrar Employee: ";
			std::cin >> ssn;

			find = PersonList.findPerson(ssn);
			if (find) {
				std::cout << "Voter with SSN " << ssn << " Sent to Registrar Employee" << std::endl;
			}
			else {
				std::cout << "Voter with SSN " << ssn << " cannot be sent" << std::endl;
			}

			pressAnyKey();
			break;
		}
		case 8:
		{
			Government gov;
			int ssn;
			bool find;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEnter the SSN of the voter you want to check the eligibility of: ";
			std::cin >> ssn;

			find = gov.valid_city(PersonList.getCity(ssn));
			if (find) {
				find = gov.valid_state(PersonList.getState(ssn));
				if (find) {
					find = PersonList.findPerson(ssn);
					if (find) {
						std::cout << "\nVoter with SSN " << ssn << " is eligible." << std::endl;
						cin.clear();
						cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
					}
					else {
						std::cout << "\nVoter with SSN " << ssn << " is not eligible." << std::endl;
						cin.clear();
						cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
					}
				}
				else {
					std::cout << "\nVoter with SSN " << ssn << " is not eligible." << std::endl;
					cin.clear();
					cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
				}
			}
			else {
				std::cout << "\nVoter with SSN " << ssn << " is not eligible." << std::endl;
				cin.clear();
				cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			}
			
			pressAnyKey();
			break;
		}
		case 9:
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
