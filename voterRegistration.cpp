#include <iostream>
#include <stdlib.h>
#include <string>

int main() 
{
    // std::cout << "Please enter your first name: \n";  
    // std::cin >> first_name; 
    // std::cout << "Please enter your last name: \n";
    // std::cin >> last_name; 
    // std::cout << "Please enter your email: \n"; 
    // std::cin >> email; 
    // std::cout << "Please enter your SSN: \n";
    // std::cin >> SSN; 
    // std::cout << "Please enter your gender: \n";
    // std::cin >> gender; 
    // std::cout << "Please enter your street address: \n";
    // std::cin >> street_address; 
    // std::cout << "Please enter your city: \n";
    // std::cin >> city; 
    // std::cout << "Please enter your state: \n";
    // std::cin >> state; 
    // std::cout << "Please enter your zip code: \n";
    // std::cin >> zipCode; 

    /********** Processes ***********/

    //std::cout << "Registration successful\n"; 
        // OR 
    //std::cout << "Registration failed. One or more eligibility requirements unmet. \n
        // Attempt to register again, or talk to registrar employee for assistance.\n";

    /********** Registered voter variable 'registered' gets updated to the value true and program ends *****/
} // end main() 

class PersonInfo {
private: 
    std::string first_name, last_name, email, SSN, address, city, state, gender; // std::string zipCode, street_address 
};  // end PersonInfo class 

class VoterSubmission: public PersonInfo{
private: 
    void provideIdentification(); // void provideID(first_name, last_name, SSN, gender);
    void updateInformation(); // will get the same info as in provideIDsend and provideAddress(), 
        // then send this info to voterData and updateRecords() in RegistrarEmployee 
    // void provideAddress(street_address, city, state, zipCode)   
}; // end VoterSubmission class 

class VoterData: public PersonInfo{
private: 
// should have the info from the most recent submission of updateInformation() 
};  // end VoterData class 

class VoterInterface{
private: 
void acceptSubmission(); 
}; // end VoterInterface class

class RegistrarEmployee: public PersonInfo{
private: 
void updateRecords(); 
void verifyIdentification(); // bool verifyID(provideID()); -- if returns false, != match
// void verifyAddress(); // bool verifyAddress(provideAddress(address)) -- if false, != match for address 
// bool registration_status_check(bool registered) -- check if person is already registered or not. 
    // returns true if already registered. Returns false if not yet registered. 
        // Only allowed to register if not yet registered 
// bool elegibilityCheck(verifyIdentification(), verifyAddress(), registration_status_check(bool registration_status)); 
}; // end RegistrarEmployee class 

class Government{
private: 
std::string state, deptID, deptName; // std::bool registration_status; 
void approveRequest(); 
void denyRequest(); 
// we should merge these two into one 'bool approveRequest(elegibilityCheck())' function that returns true or false,
    // then we can perform some action, like approving or denying someone's registration with that value 
}; // end Government class 