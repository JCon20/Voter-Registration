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

	void recieveFName(string newFName);
	void recieveLName(string newLName);
	void recieveEmail(string newEmail);
	void recieveSSN(string newSSN);
	void recieveAddress(string newAddress);
	void recieveCity(string newCity);
	void recieveState(string newState);
	void recieveGender(string newGender);

};
