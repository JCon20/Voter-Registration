#include <iostream>
#include <Government.h>
#include <RegistrarEmployee.h>

using namespace std; 

class Government {
private: 
// string state, deptID, deptName; -- didn't get used 
bool approved;
bool registered;   

public:
Government() {

}

~Government() {

}

bool validate_city(RegistrarEmployee employee)
{
    // must take a valid city
    if (employee.sendToGovCity() == "Mobile") {
        return true; 
    } 
    else {
        return false; 
    }
}

bool validate_state(RegistrarEmployee employee) {
    if (employee.sendToGovState() == "Alabama") {
        return true; 
    }
    if (employee.sendToGovState() == "AL") {
        return true; 
    }
    else{
        return false; 
    }
}

bool validate_zipcode(RegistrarEmployee employee)
{
    if (employee.sendToGovZipcode() == "36695" /*add more later*/) {
        return true; 
    }
    else {
        return false; 
    }
}

void checkVoterDatabase(RegistrarEmployee employee) { 
  
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
        while (getline(s, word)) { 
            // add all the column data 
            // of a row to a vector 
            row.push_back(word); 
        } 
  
        // convert string to integer for comparision  
        // Check if a voter is already registered   
        if (employee.sendToGovSSN() == temp) {
            registered = true;  
            break; 
        }
    else{
        registered = false; 
    } 
    } // end while 
} // end checkVoterDatabase()

bool eligibilityCheck() {
    if (registered == false)
    {
        // applicant is eligible to register
        return true; 
    } 
    else {
        return false; 
    }
}

void approveRegistration()
{  
    if (eligibilityCheck() == true)  
    {
        approved = true;
    } // end if  
    else{
        approved = false; 
    } // end else 
} // end approveRegistration() 

void updateVoterDatabase(RegistrarEmployee employee)
{
    // will write to a csv file a newly registered voter 
    if (approved == true) 
    {
    std::ofstream voterRegistry;
      voterRegistry.open ("voter-registry.csv");
      voterRegistry << employee.sendToGovFName(), employee.sendToGovLName(), employee.sendToGovSSN(), 
            employee.sendToGovEmail(), employee.sendToGovAddress(), employee.sendToGovCity(), employee.sendToGovState(), 
            employee.sendToGovZipcode(), employee.sendToGovGender(), "\n";
      voterRegistry.close();
    } // end if () 
} // end updateVoterDatabase()
}; 
  