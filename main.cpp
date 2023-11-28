#include <iostream>
#include <stdlib.h>
#include <string>

#include "PersonInfo.h"
#include "RegistrarEmployee.h"
#include "Government.h"
#include "VoterSubmission.h"

using namespace std;

int main() {

	int UIChoice1;
	bool UIChoice2 = false;
	
	PersonInfo person;
	RegistrarEmployee employee;
	

	//Fills each string with empty data display.
	string fName = person.getFName();
	string lName = person.getLName();
	string email = person.getEmail();
	string ssn = person.getSSN();
	string address = person.getAddress();
	string city = person.getCity();
	string state = person.getState();
	string gender = person.getGender();

	//Displays 'empty' values Eg. (No First Name)
	/* Was used to verify system integrity. Commented out to clean up UI.
	std::cout << fName << std::endl;
	std::cout << lName << std::endl;
	std::cout << email << std::endl;
	std::cout << ssn << std::endl;
	std::cout << address << std::endl;
	std::cout << city << std::endl;
	std::cout << state << std::endl;
	std::cout << gender << std::endl;
	*/

	//Begin User Interface
	std::cout << "Thank you for choosing to participate in the voting process!\n";
	
	do {
		std::cout << "Please select the option we can help you with today by entering the corresponding number.\n";
		std::cout << "1. Register to Vote.\n2.Update existing voter information.\n";
		std::getline(std::cin, UIChoice1);

		switch(UIChoice1){
			case 1: // UI for user to input and verify personal info.
				std::cout << "Thank you for choosing to register to vote in the local Alabama election.\n";
				std::cout << "First, we need to collect some of your information.\n";
			
				//Prompts user to modify and verify each value.
				do {
					person.modifyFName();
					person.modifyLName();
					person.modifyEmail();
					person.modifySSN();
					person.modifyAddress();
					person.modifyCity();
					person.modifyState();
					person.modifyGender();

					//Verify voter input.
					std::cout << "Is the following information correct?\n";
					std::cout << fName << std::endl;
					std::cout << lName << std::endl;
					std::cout << email << std::endl;
					std::cout << ssn << std::endl;
					std::cout << address << std::endl;
					std::cout << city << std::endl;
					std::cout << state << std::endl;
					std::cout << gender << std::endl;
					std::cout << "Please enter the number corresponding to your choice.\n0.No\n1.Yes\n";
					std::getline(std::cin, UIChoice2);
				} while (UIChoice2 == false);
				

				//Stores user input and displays final time.
				std::cout << "The following information has been stored.\n";
				fName = person.getFName();
				lName = person.getLName();
				email = person.getEmail();
				ssn = person.getSSN();
				address = person.getAddress();
				city = person.getCity();
				state = person.getState();
				gender = person.getGender();
				break;
		
			case 2: // UI for user to modify existing voter info.
				std::cout << "This decision hasn't been fully implemented."; // I'm unsure how to check user input to see if that voter name exists. Can someone assist? 

				/*
				In previous code, I had:
    
    string fullNameCheck;
    int UIChoice3;
    int UIChoice4 = 1;
    string activeAccount;
  
    cout << "\nWhat is the name of the account you'd like to update: \n";
    getline(cin, fullNameCheck);
  do{
    if (fullNameCheck == fullName){
      cout << "\nWhich data would you like to change?\n1. " << first_name << "\n2. " << last_name << "\n3. ";
      cout << email << "\n4. " << SSN << "\n5. " << gender << "\n6. " << street_address << "\n7. " << city; 
      cout << "\n8. " << state << "\n9. " << zipCode << "\n";
    }else{
      cout << "That name is not in our system. Please try another name.\n";
      updateInfo();
      };
    cin >> UIChoice3;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  switch(UIChoice3){
    case 1:
        cout << "Please enter your first name: \n";
        getline(cin, first_name);
        activeAccount = first_name + " " + last_name;
        cout << "Your information has been updated\n";
        break;
    case 2:
        cout << "Please enter your last name: \n";
        getline(cin, last_name);
        activeAccount = first_name + " " + last_name;
        cout << "Your information has been updated\n";
        break;
    case 3:
        cout << "Please enter your email: \n";
        getline(cin, email);
        cout << "Your information has been updated\n";
        break;
    case 4:
        cout << "Please enter your SSN: \n";
        getline(cin, SSN);
        cout << "Your information has been updated\n";
        break;
    case 5:
        cout << "Please enter your gender: \n";
        getline(cin, gender);
        cout << "Your information has been updated\n";
        break;
    case 6:
        cout << "Please enter your street address: \n";
        getline(cin, street_address);
        cout << "Your information has been updated\n";
        break;
    case 7:
        cout << "Please enter your city: \n";
        getline(cin, city);
        cout << "Your information has been updated\n";
        break;
    case 8:
        cout << "Please enter your state: \n";
        getline(cin, state);
        cout << "Your information has been updated\n";
        break;
    case 9:
        cout << "Please enter your zip code: \n";
        getline(cin, zipCode);
        cout << "Your information has been updated\n";
        break;
    default:
        cout << "That is not a valid option. Please try again.\n";
        updateInfo();
        break;
  }
  cout << "\nWould you like to update another piece of information?\n1. Yes\n2. No\n";
  cin >> UIChoice4;
  }while(UIChoice4 == 1);
  fullName = activeAccount;
  }
				*/
				break;
		
			default:
				std::cout << "This is not a valid option. Please type the number corresponding to your choice. (1 or 2)\n";
		} while (UIChoice1 < 1 || UIChoice1 > 2);
			
			

	
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
