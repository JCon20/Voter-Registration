#include <iostream>
#include <stdlib.h> 
#include <string>
#include <array>
#include <vector>
#include <fstream>
#include <RegistrarEmployee.h>
#include <PersonInfo.h>

using namespace std; 

class Government {
private: 
string state, deptID, deptName; 
bool approved;
bool registration_status;   

public:
Government() {

}

~Government() {

}

bool valid_City(RegistrarEmployee employee)
{
    // must take a valid city
    if (employee.recieveCity == "Mobile") {
        return true; 
    } 
    else {
        return false; 
    }
}

bool valid_zipcode(RegistrarEmployee employee)
{
    if (employee.recieveZipCode == "36695" /*add more later*/) {
        return true; 
    }
    else {
        return false; 
    }
}

void approveRegistration()
{  
    if (elegibilityCheck() == true)  
    {
        approved = true;
    } // end if  
    else{
        approved = false; 
    } // end else 
} // end approveRegistration()

void checkVoterDatabase_() 
{ 
  
    // File pointer 
    fstream fin; 
  
    // Open an existing file 
    fin.open("voter-registry.csv", ios::in); 
  
    // Get the ssn of the potential voter 
    // of which the data is required  
    // *should already have gotten the value in the input fields in main. Just pipe it to here*
    // Read the Data from the file 
    // as String Vector 
    vector<string> row; 
    string line, word, temp; 
  
    while (fin >> temp) { 
  
        row.clear(); 
  
        // read an entire row and 
        // store it in a string variable 'line' 
        getline(fin, line); 
  
        // used for breaking words 
        stringstream s(line); 
  
        // read every column data of a row and 
        // store it in a string variable, 'word' 
        while (getline(s, word, ', ')) { 
  
            // add all the column data 
            // of a row to a vector 
            row.push_back(word); 
        } 
  
        // convert string to integer for comparision 
        // * don't need to do this. Ssn is a string, not int* roll2 = stoi(row[0]); 
  
        // Compare the roll number 
        if (// supposed to say, if person.ssn is found within the file at their name) { 
        if !found {
            person.registered == false
        }
    } 
    if (count == 0) 
        cout << "Record not found\nEligible"; 
} // end read_record() 

bool eligibilityCheck(/*Needs to take an object representing a new applicant*/) {
    if (checkVoterDatabase() returns(false))
    {
        // applicant is eligible to register
        return true; 
    } 
    else {
        return false; 
    }
}

void updateVoterDatabase()
{
    // will write to a csv file a newly registered voter 
    if (approved == true) 
    {
    std::ofstream voterRegistry;
      voterRegistry.open ("voter-registry.csv");
      voterRegistry << "This is the first cell in the first column.\n";
      voterRegistry << "PersonInfo::getFName()", "PersonInfo::getLName()", "PersonInfo::getSSN()", 
            "PersonInfo::getEmail()", "PersonInfo::getAddress()", "PersonInfo::getCity()", "PersonInfo::getState()", 
            "PersonInfo::getGender()", "\n";
      voterRegistry.close();
    } // end if () 
} // end updateVoterDatabase()  
}; // end class Government 