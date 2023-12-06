#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonList.h"
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

void RegistrarEmployee::receiveFName(string newFName) {
	fName = newFName;
}

void RegistrarEmployee::receiveLName(string newLName) {
	lName = newLName;
}

void RegistrarEmployee::receiveEmail(string newEmail) {
	email = newEmail;
}

void RegistrarEmployee::receiveSSN(string newSSN) {
	ssn = newSSN;
}

void RegistrarEmployee::receiveAddress(string newAddress) {
	address = newAddress;
}

void RegistrarEmployee::receiveCity(string newCity) {
	city = newCity;
}

void RegistrarEmployee::receiveState(string newState) {
	state = newState;
}

void RegistrarEmployee::receiveGender(string newGender) {
	gender = newGender;
}

string RegistrarEmployee::sendToGovFName() { //Sends user data to Governemnt
	return(fName);
}

string RegistrarEmployee::sendToGovLName() { //Sends user data to Governemnt
	return(lName);
}

string RegistrarEmployee::sendToGovEmail() { //Sends user data to Governemnt
	return(email);
}

string RegistrarEmployee::sendToGovSSN() { //Sends user data to Governemnt
	return(ssn);
}

string RegistrarEmployee::sendToGovAddress() { //Sends user data to Governemnt
	return(address);
}

string RegistrarEmployee::sendToGovCity(int ssn) { //Sends user data to Governemnt
	PersonList person;
	city = person.getCity(ssn);
	return(city);
}

string RegistrarEmployee::sendToGovState(int ssn) { //Sends user data to Governemnt
	PersonList person;
	state = person.getState(ssn);
	return(state);
}

string RegistrarEmployee::sendToGovGender() { //Sends user data to Governemnt
	return(gender);
}
