#pragma once
#include <iostream>

using namespace std;

class RegistrarEmployee {
private:
	string fName = "No First Name Recieved";
	string lName = "No Last Name Recieved";
	string email = "No Email Recieved";
	string ssn = "No Social Security Number Recieved";
	string address = "No Address Recieved";
	string city = "No City Recieved";
	string state = "No State Recieved";
	string gender = "No Gender Recieved";

public:
	RegistrarEmployee();
	~RegistrarEmployee();

	string sendFName();
	string sendLName();
	string sendEmail();
	string sendSSN();
	string sendAddress();
	string sendCity();
	string sendState();
	string sendGender();

	void receiveFName(string newFName);
	void receiveLName(string newLName);
	void receiveEmail(string newEmail);
	void receiveSSN(string newSSN);
	void receiveAddress(string newAddress);
	void receiveCity(string newCity);
	void receiveState(string newState);
	void receiveGender(string newGender);

	string sendToGovFName();
	string sendToGovLName();
	string sendToGovEmail();
	string sendToGovSSN();
	string sendToGovAddress();
	string sendToGovCity(int ssn);
	string sendToGovState(int ssn);
	string sendToGovGender(); // string RegistrarEmployee::sendToGovGender();
};
