#include <iostream>
#include <stdlib.h>
#include <string>

#include "RegistrarEmployee.h"

using namespace std;

RegistrarEmployee::RegistrarEmployee() {

}

RegistrarEmployee::~RegistrarEmployee() {

}

string RegistrarEmployee::sendFName() {
	std::cout << "User First Name " << fName << " Sent" << std::endl;
	return(fName);
}

string RegistrarEmployee::sendLName() {
	std::cout << "User Last Name " << lName << " Sent" << std::endl;
	return(lName);
}

string RegistrarEmployee::sendEmail() {
	std::cout << "User Email " << email << " Sent" << std::endl;
	return(email);
}

string RegistrarEmployee::sendSSN() {
	std::cout << "User Social Security Number " << ssn << " Sent" << std::endl;
	return(ssn);
}

string RegistrarEmployee::sendAddress() {
	std::cout << "User Address " << address << " Sent" << std::endl;
	return(address);
}

string RegistrarEmployee::sendCity() {
	std::cout << "User City " << city << " Sent" << std::endl;
	return(city);
}

string RegistrarEmployee::sendState() {
	std::cout << "User State " << state << " Sent" << std::endl;
	return(state);
}

string RegistrarEmployee::sendGender() {
	std::cout << "User Gender " << gender << " Sent" << std::endl;
	return(gender);
}

void RegistrarEmployee::recieveFName(string newFName) {
	fName = newFName;
}

void RegistrarEmployee::recieveLName(string newLName) {
	lName = newLName;
}

void RegistrarEmployee::recieveEmail(string newEmail) {
	email = newEmail;
}

void RegistrarEmployee::recieveSSN(string newSSN) {
	ssn = newSSN;
}

void RegistrarEmployee::recieveAddress(string newAddress) {
	address = newAddress;
}

void RegistrarEmployee::recieveCity(string newCity) {
	city = newCity;
}

void RegistrarEmployee::recieveState(string newState) {
	state = newState;
}

void RegistrarEmployee::recieveGender(string newGender) {
	gender = newGender;
}
