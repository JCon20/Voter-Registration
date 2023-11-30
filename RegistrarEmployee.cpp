#include <iostream>
#include <stdlib.h>
#include <string>

#include "RegistrarEmployee.h"

using namespace std;

RegistrarEmployee::RegistrarEmployee() {

}

RegistrarEmployee::~RegistrarEmployee() {

}

string RegistrarEmployee::sendFName() { //Displays to user that data for fName was sent.
	std::cout << "User First Name " << fName << " Sent" << std::endl;
	return(fName);
}

string RegistrarEmployee::sendLName() { //Displays to user that data for lName was sent.
	std::cout << "User Last Name " << lName << " Sent" << std::endl;
	return(lName);
}

string RegistrarEmployee::sendEmail() { //Displays to user that data for email was sent.
	std::cout << "User Email " << email << " Sent" << std::endl;
	return(email);
}

string RegistrarEmployee::sendSSN() { //Displays to user that data for ssn was sent.
	std::cout << "User Social Security Number " << ssn << " Sent" << std::endl;
	return(ssn);
}

string RegistrarEmployee::sendAddress() { //Displays to user that data for address was sent.
	std::cout << "User Address " << address << " Sent" << std::endl;
	return(address);
}

string RegistrarEmployee::sendCity() { //Displays to user that data for city was sent.
	std::cout << "User City " << city << " Sent" << std::endl;
	return(city);
}

string RegistrarEmployee::sendState() { //Displays to user that data for state was sent.
	std::cout << "User State " << state << " Sent" << std::endl;
	return(state);
}

string RegistrarEmployee::sendState() {
	std::cout << "User zipcode " << zipcode << " Sent" << std::endl;
	return(zipcode);
}

string RegistrarEmployee::sendGender() { //Displays to user that data for gender was sent.
	std::cout << "User Gender " << gender << " Sent" << std::endl;
	return(gender);
}

void RegistrarEmployee::recieveFName(string newFName) { //Inserts new fname into appropriate location.
	fName = newFName;
}

void RegistrarEmployee::recieveLName(string newLName) { //Inserts new lname into appropriate location.
	lName = newLName;
}

void RegistrarEmployee::recieveEmail(string newEmail) { //Inserts new email into appropriate location.
	email = newEmail;
}

void RegistrarEmployee::recieveSSN(string newSSN) { //Inserts new ssn into appropriate location.
	ssn = newSSN;
}

void RegistrarEmployee::recieveAddress(string newAddress) { //Inserts new address into appropriate location.
	address = newAddress;
}

void RegistrarEmployee::recieveCity(string newCity) { //Inserts new city into appropriate location.
	city = newCity;
}

void RegistrarEmployee::recieveState(string newState) { //Inserts new state into appropriate location.
	state = newState;
}

void RegistrarEmployee::recieveGender(string newGender) { //Inserts new gender into appropriate location.
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

string RegistrarEmployee::sendToGovCity() { //Sends user data to Governemnt
	return(city);
}

string RegistrarEmployee::sendToGovState() { //Sends user data to Governemnt
	return(state);
}

string RegistrarEmployee::sendToGovZipcode() {
	return(zipcode); 
}

string RegistrarEmployee::sendToGovGender() { //Sends user data to Governemnt
	return(gender);
}

