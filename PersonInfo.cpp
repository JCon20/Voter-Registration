#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonInfo.h"

using namespace std;

PersonInfo::PersonInfo() {
	
}

PersonInfo::~PersonInfo() {

}

string PersonInfo::getFName() { //Returns value stored in fName
	return(fName);
}

string PersonInfo::getLName() { //Returns value stored in lName
	return(lName);
}

string PersonInfo::getEmail() { //Returns value stored in email
	return(email);
}

string PersonInfo::getSSN() { //Returns value stored in ssn
	return(ssn);
}

string PersonInfo::getAddress() { //Returns value stored in address
	return(address);
}

string PersonInfo::getCity() { //Returns value stored in city
	return(city);
}

string PersonInfo::getState() { //Returns value stored in state
	return(state);
}

string PersonInfo::getGender() { //Returns value stored in gender
	return(gender);
}



void PersonInfo::modifyFName() { //Prompts user to modify data for fName
	std::cout << "Please enter your First Name: " << std::endl;
	std::getline(std::cin, fName);
}
void PersonInfo::modifyLName() { //Prompts user to modify data for lName
	std::cout << "Please enter your Last Name: " << std::endl;
	std::getline(std::cin, lName);
}
void PersonInfo::modifyEmail() { //Prompts user to modify data for email
	std::cout << "Please enter your Email: " << std::endl;
	std::getline(std::cin, email);
}
void PersonInfo::modifySSN() { //Prompts user to modify data for ssn
	std::cout << "Please enter your Social Security Number: " << std::endl;
	std::getline(std::cin, ssn);
}
void PersonInfo::modifyAddress() { //Prompts user to modify data for address
	std::cout << "Please enter your Address: " << std::endl;
	std::getline(std::cin, address);
}
void PersonInfo::modifyCity() { //Prompts user to modify data for city
	std::cout << "Please enter your City: " << std::endl;
	std::getline(std::cin, city);
}
void PersonInfo::modifyState() { //Prompts user to modify data for state
	std::cout << "Please enter your State: " << std::endl;
	std::getline(std::cin, state);
}
void PersonInfo::modifyGender() { //Prompts user to modify data for gender
	std::cout << "Please enter your Gender: " << std::endl;
	std::getline(std::cin, gender);
}
