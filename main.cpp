#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonInfo.h"
#include "RegistrarEmployee.h"

using namespace std;

int main() {

	PersonInfo person;
	RegistrarEmployee employee;

	string fName = person.getFName();
	string lName = person.getLName();
	string email = person.getEmail();
	string ssn = person.getSSN();
	string address = person.getAddress();
	string city = person.getCity();
	string state = person.getState();
	string gender = person.getGender();

	std::cout << fName << std::endl;
	std::cout << lName << std::endl;
	std::cout << email << std::endl;
	std::cout << ssn << std::endl;
	std::cout << address << std::endl;
	std::cout << city << std::endl;
	std::cout << state << std::endl;
	std::cout << gender << std::endl;

	person.modifyFName();
	person.modifyLName();
	person.modifyEmail();
	person.modifySSN();
	person.modifyAddress();
	person.modifyCity();
	person.modifyState();
	person.modifyGender();

	fName = person.getFName();
	lName = person.getLName();
	email = person.getEmail();
	ssn = person.getSSN();
	address = person.getAddress();
	city = person.getCity();
	state = person.getState();
	gender = person.getGender();

	employee.recieveFName(fName);
	employee.recieveLName(lName);
	employee.recieveEmail(email);
	employee.recieveSSN(ssn);
	employee.recieveAddress(address);
	employee.recieveCity(city);
	employee.recieveState(state);
	employee.recieveGender(gender);

	employee.sendFName();
	employee.sendLName();
	employee.sendEmail();
	employee.sendSSN();
	employee.sendAddress();
	employee.sendCity();
	employee.sendState();
	employee.sendGender();

}
