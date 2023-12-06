#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonInfo.h"
#include "PersonList.h"

using namespace std;

PersonInfo::PersonInfo() {
	fName = "No First Name";
	lName = "No Last Name";
	email = "No Email";
	ssn = 000000000;
	address = "No Address";
	city = "No City";
	state = "No State";
	gender = "No Gender";
}

PersonInfo::PersonInfo(string fName, string lName, string email, int ssn, string address, string city, string state, string gender) : fName{ fName }, lName{ lName }, email{ email }, ssn{ ssn }, address{ address }, city{ city }, state{ state }, gender{ gender } {

}

PersonInfo::~PersonInfo() {

}

string PersonInfo::getFName() {
	return(fName);
}

string PersonInfo::getLName() {
	return(lName);
}

string PersonInfo::getEmail() {
	return(email);
}

int PersonInfo::getSSN() {
	return(ssn);
}

string PersonInfo::getAddress() {
	return(address);
}

string PersonInfo::getCity() {
	return(city);
}

string PersonInfo::getState() {
	return(state);
}

string PersonInfo::getGender() {
	return(gender);
}



void PersonInfo::modifyFName() {
	std::cout << "Enter your First Name: " << std::endl;
	std::getline(std::cin, fName);
}
void PersonInfo::modifyLName() {
	std::cout << "Enter your Last Name: " << std::endl;
	std::getline(std::cin, lName);
}
void PersonInfo::modifyEmail() {
	std::cout << "Enter your Email: " << std::endl;
	std::getline(std::cin, email);
}
void PersonInfo::modifySSN() {
	bool temp = true;

	do {
		std::cout << "Enter your Social Security Number: " << std::endl;
		std::cin >> ssn;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\tOnly integer input please. \n";
		}
		else if (ssn > 999999999) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\tSSN is longer than 9 digits. \n";
			cout << "\n\tSSN must have a 9 digit length. \n";
		}
		else if (ssn < 100000000) {
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "\n\tSSN is shorter than 9 digits. \n";
			cout << "\n\tSSN must have a 9 digit length. \n";
		}
		else if ((ssn >= 100000000) && (ssn <= 999999999)) {
			cout << "\n\tValid SSN. \n";
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			temp = false;
		}
		else {
			cout << "\n\tUnknown Error. Invalid SSN. \n";
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		}
	} while (temp);
	
}

void PersonInfo::modifyAddress() {
	std::cout << "Enter your Address: " << std::endl;
	std::getline(std::cin, address);
}
void PersonInfo::modifyCity() {
	std::cout << "Enter your City: " << std::endl;
	std::getline(std::cin, city);
}
void PersonInfo::modifyState() {
	std::cout << "Enter your State: " << std::endl;
	std::getline(std::cin, state);
}
void PersonInfo::modifyGender() {
	std::cout << "Enter your Gender: " << std::endl;
	std::getline(std::cin, gender);
}
