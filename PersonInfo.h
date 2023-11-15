#pragma once
#include <iostream>

using namespace std;

class PersonInfo {
private:
	string fName;
	string lName;
	string email;
	string ssn;
	string address;
	string city;
	string state;
	string gender;

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