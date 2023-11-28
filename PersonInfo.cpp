#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonInfo.h"

using namespace std;

PersonInfo::PersonInfo() {
	
}

PersonInfo::~PersonInfo() {

}

string PersonInfo::getFName() { //Sends value stored in fName
	return(fName);
}

string PersonInfo::getLName() { //Sends value stored in lName
	return(lName);
}

string PersonInfo::getEmail() { //Sends value stored in email
	return(email);
}

string PersonInfo::getSSN() { //Sends value stored in ssn
	return(ssn);
}

string PersonInfo::getAddress() { //Sends value stored in address
	return(address);
}

string PersonInfo::getCity() { //Sends value stored in city
	return(city);
}

string PersonInfo::getState() { //Sends value stored in state
	return(state);
}

string PersonInfo::getGender() { //Sends value stored in gender
	return(gender);
}



void PersonInfo::modifyFName() { //Prompts user to enter data for fName
	std::cout << "Enter your First Name: " << std::endl;
	std::getline(std::cin, fName);
}
void PersonInfo::modifyLName() { //Prompts user to enter data for lName
	std::cout << "Enter your Last Name: " << std::endl;
	std::getline(std::cin, lName);
}
void PersonInfo::modifyEmail() { //Prompts user to enter data for email
	std::cout << "Enter your Email: " << std::endl;
	std::getline(std::cin, email);
}
void PersonInfo::modifySSN() { //Prompts user to enter data for ssn
	std::cout << "Enter your Social Security Number: " << std::endl;
	std::getline(std::cin, ssn);
}
void PersonInfo::modifyAddress() { //Prompts user to enter data for address
	std::cout << "Enter your Address: " << std::endl;
	std::getline(std::cin, address);
}
void PersonInfo::modifyCity() { //Prompts user to enter data for city
	std::cout << "Enter your City: " << std::endl;
	std::getline(std::cin, city);
}
void PersonInfo::modifyState() { //Prompts user to enter data for state
	std::cout << "Enter your State: " << std::endl;
	std::getline(std::cin, state);
}
void PersonInfo::modifyGender() { //Prompts user to enter data for gender
	std::cout << "Enter your Gender: " << std::endl;
	std::getline(std::cin, gender);
}
