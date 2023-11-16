#pragma once
#include <iostream>

using namespace std;

class PersonInfo {
private:
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


	string getFName();
	string getLName();
	string getEmail();
	string getSSN();
	string getAddress();
	string getCity();
	string getState();
	string getGender();


	void modifyFName();
	void modifyLName();
	void modifyEmail();
	void modifySSN();
	void modifyAddress();
	void modifyCity();
	void modifyState();
	void modifyGender();


};
