#pragma once
#include <iostream>

using namespace std;

class RegistrarEmployee {
private: // Creates empty values for each value to be taken by the user.
	string fName = "No First Name Recieved";
	string lName = "No Last Name Recieved";
	string email = "No Email Recieved";
	string ssn = "No Social Security Number Recieved";
	string address = "No Address Recieved";
	string city = "No City Recieved";
	string state = "No State Recieved";
	string zipcode = "No Zipcode Recieved"; 
	string gender = "No Gender Recieved";

public:
	RegistrarEmployee();
	~RegistrarEmployee();

	// Defines the type of value to be received by each method.
	string sendFName();
	string sendLName();
	string sendEmail();
	string sendSSN();
	string sendAddress();
	string sendCity();
	string sendState();
	string sendZipcode(); 
	string sendGender();


	// Defines each method for receiving data from user.
	void recieveFName(string newFName);
	void recieveLName(string newLName);
	void recieveEmail(string newEmail);
	void recieveSSN(string newSSN);
	void recieveAddress(string newAddress);
	void recieveCity(string newCity);
	void recieveState(string newState);
	void recieveZipcode(string zipcode); 
	void recieveGender(string newGender);

	string sendToGovFName();
	string sendToGovLName();
	string sendToGovEmail();
	string sendToGovSSN();
	string sendToGovAddress();
	string sendToGovCity();
	string sendToGovState();
	string sendToGovZipcode();
	string sendToGovGender(); // string RegistrarEmployee::sendToGovGender();
};
