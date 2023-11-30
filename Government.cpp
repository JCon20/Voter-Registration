#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "RegistrarEmployee.h"
#include "PersonInfo.h"

using namespace std;

class Government {
private:
    bool approved;
    bool registered;
    RegistrarEmployee employee;

public:
    Government() : approved(false), registered(false) {} // Initialize approved and registered to false for clarity.

    ~Government() {} 

    bool valid_city() {
        return employee.sendToGovCity() == "Mobile";
    }

    bool valid_state() {
        string state = employee.sendToGovState();
        return state == "Alabama" || state == "AL";
    }

    bool valid_zipcode() {
        return employee.sendToGovZipcode() == "36695"; // add more valid zip codes as needed
    }

    void checkVoterDatabase() {
        ifstream fin("voter-registry.csv");
        string line, word;
        registered = false;

        while (getline(fin, line)) {
            stringstream s(line);
            while (getline(s, word, ',')) {
                if (word == employee.sendToGovSSN()) {
                    registered = true;
                    return;
                }
            }
        }
    }

    bool eligibilityCheck() const {
        return !registered;
    }

    void approveRegistration() {
        approved = eligibilityCheck();
    }

    void updateVoterDatabase() {
        if (approved) {
            ofstream voterRegistry("voter-registry.csv", ios::app);
            voterRegistry << employee.sendToGovFName() << ',' 
                          << employee.sendToGovLName() << ',' 
                          << employee.sendToGovSSN() << ',' 
                          << employee.sendToGovEmail() << ',' 
                          << employee.sendToGovAddress() << ',' 
                          << employee.sendToGovCity() << ',' 
                          << employee.sendToGovState() << ',' 
                          << employee.sendToGovZipcode() << ',' 
                          << employee.sendToGovGender() << '\n';
        }
    }
};