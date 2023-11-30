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
	ssn = "No Social Security Number";
	address = "No Address";
	city = "No City";
	state = "No State";
	gender = "No Gender";
}

PersonInfo::PersonInfo(string fName, string lName, string email, string ssn, string address, string city, string state, string gender) : fName{ fName }, lName{ lName }, email{ email }, ssn{ ssn }, address{ address }, city{ city }, state{ state }, gender{ gender } {

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

string PersonInfo::getSSN() {
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
	std::cout << "Enter your Social Security Number: " << std::endl;
	std::getline(std::cin, ssn);
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
