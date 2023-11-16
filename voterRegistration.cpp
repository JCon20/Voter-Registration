#include <iostream>
#include <stdlib.h>
#include <string>
#include <limits>

using namespace std;

class PersonInfo {
public: 
    string first_name, last_name, email, SSN, address, city, state, gender; 
    string zipCode, street_address, fullName;
};  // end PersonInfo class 

class VoterSubmission: public PersonInfo{
public: 
    void provideID();
    void updateInfo(); 
        // send this info to voterData and updateRecords() in RegistrarEmployee    
};

void VoterSubmission::provideID(){ // Cout/Cin statements written by JC; ZC copy&pasted it, removed comments, and added under appropriate context to make it operable.
  bool dataCorrect = false;
  do {
      cout << "Please enter your first name: \n";
      getline(cin, first_name);
      cout << "Please enter your last name: \n";
      getline(cin, last_name);
      cout << "Please enter your email: \n";
      getline(cin, email);
      cout << "Please enter your SSN: \n";
      getline(cin, SSN);
      cout << "Please enter your gender: \n";
      getline(cin, gender);
      cout << "Please enter your street address: \n";
      getline(cin, street_address);
      cout << "Please enter your city: \n";
      getline(cin, city);
      cout << "Please enter your state: \n";
      getline(cin, state);
      cout << "Please enter your zip code: \n";
      getline(cin, zipCode);
      fullName = first_name + " " + last_name;
      cout << "Is the following information correct?\n" << fullName << "\n" << email << "\n" << SSN << "\n";
      cout << gender << "\n" << street_address << "\n" << city << "\n" << state << "\n" << zipCode << "\n";
      cout << "Please enter 1 for yes or 0 for no: \n";
      cin >> dataCorrect; // Can maybe improve by selecting which info is wrong similar to updateInfo() so the user can select which info to fix?
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // This is here cuz terminal gets mad if I don't.-ZC
  } while (dataCorrect == false);
  }

void VoterSubmission::updateInfo(){ //full method written by ZC
    string fullNameCheck;
    int choice1;
    int choice2 = 1;
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
    cin >> choice1;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  switch(choice1){
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
  cin >> choice2;
  }while(choice2 == 1);
  fullName = activeAccount;
  }

int main() 
{
  VoterSubmission voter;  // We should consider the possibility of having multiple voters-ZC
  voter.provideID(); // Testing method -ZC
  voter.updateInfo(); // Testing method -ZC
  
  /********** Processes ***********/

    //std::cout << "Registration successful\n"; 
        // OR 
    //std::cout << "Registration failed. One or more eligibility requirements unmet. \n
        // Attempt to register again, or talk to registrar employee for assistance.\n";

    /********** Registered voter variable 'registered' gets updated to the value true and program ends *****/
} // end main() 


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
