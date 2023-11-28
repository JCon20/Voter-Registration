#pragma once
#include <iostream>

using namespace std;

class PersonInfo {
private: // Creates empty values for each value to be taken by the user.
	string fName = "No First Name";
	string lName = "No Last Name";
	string email = "No Email";
	string ssn = "No Social Security Number";
	string address = "No Address";
	string city = "No City";
	string state = "No State";
	string gender = "No Gender";

public:
	PersonInfo();
	~PersonInfo();

	// Defines the type of value to be received by each method.
	string getFName();
	string getLName();
	string getEmail();
	string getSSN();
	string getAddress();
	string getCity();
	string getState();
	string getGender();

	// Defines each method for receiving data from user.
	void modifyFName();
	void modifyLName();
	void modifyEmail();
	void modifySSN();
	void modifyAddress();
	void modifyCity();
	void modifyState();
	void modifyGender();


};
