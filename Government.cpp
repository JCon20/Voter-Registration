#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
#include "RegistrarEmployee.h"
#include "PersonList.h"
#include "PersonInfo.h"
#include "Government.h"

using namespace std;

    RegistrarEmployee employee;

    Government::Government() {
        approved = false;
        registered = false;
    } // Initialize approved and registered to false for clarity.

    Government::~Government() {
    }

    bool Government::valid_city(string city) {
        bool temp = true;

        for (char c : city) {
            if (!isalpha(c)) {
                temp = false; 
            }
        }
        return(temp);  //return true if all letters
    }

    bool Government::valid_state(string state) {
        bool temp;
        temp = (state == "Alabama" || state == "AL" || state == "Alaska" || state == "AK" || state == "Arizona" || state == "AZ" || state == "Arkansas" || state == "AR" || state == "California" || state == "CA" || state == "Colorado" || state == "CO" || state == "Conneticut" || state == "CT" || state == "Delware" || state == "DE" || state == "Florida" || state == "FL" || state == "Georgia" || state == "GA" || state == "Hawaii" || state == "HI" || state == "Idaho" || state == "ID" || state == "Illinois" || state == "IL" || state == "Indiana" || state == "IN" || state == "Iowa" || state == "IA" || state == "Kansas" || state == "KS" || state == "Kentucky" || state == "KY" || state == "Louisiana" || state == "LA" || state == "Maine" || state == "ME" || state == "Maryland" || state == "MD" || state == "Massachusetts" || state == "MA" || state == "Michigan" || state == "MI" || state == "Minnesota" || state == "MN" || state == "Mississippi" || state == "MS" || state == "Missouri" || state == "MO" || state == "Montana" || state == "MT" || state == "Nebraska" || state == "NE" || state == "Nevada" || state == "NV" || state == "New Hampshire" || state == "NH" || state == "New Jersey" || state == "NJ" || state == "New Mexico" || state == "NM" || state == "New York" || state == "NY" || state == "North Carolina" || state == "NC" || state == "North Dakota" || state == "ND" || state == "Ohio" || state == "OH" || state == "Oklahoma" || state == "OK" || state == "Oregon" || state == "OR" || state == "Pennsylvania" || state == "PA" || state == "Rhode Island" || state == "RI" || state == "South Carolina" || state == "SC" || state == "South Dakota" || state == "SD" || state == "Tennessee" || state == "TN" || state == "Texas" || state == "TX" || state == "Utah" || state == "UT" || state == "Vermont" || state == "VT" || state == "Virginia" || state == "VA" || state == "Washington" || state == "WA" || state == "West Virginia" || state == "WV" || state == "Winsconsin" || state == "WI" || state == "Wyoming" || state == "WY");
        return(temp);
    }

    bool Government::checkVoterDatabase(int ssn) {
        PersonList person;
        registered = false;
        if (person.findPerson(ssn)) {
            registered = true;
        }
        
        return(registered);
    }

    bool Government::eligibilityCheck(int ssn, bool temp) {
        Government gov;
        bool eligible = false;
        bool tempBool = false;
        if (temp) {
            if (gov.checkVoterDatabase(ssn)) {
                tempBool = true;
            }
        }
        return(eligible);
    }

    void Government::approveRegistration(bool eligible) {
        if (eligible) {
            cout << "\tVoter is approved.\n";
        }
        else {
            cout << "\tVoter is ineligible.\n";
        }
    }

    void Government::updateVoterDatabase() {
        if (approved) {
            ofstream voterRegistry("voter-registry.csv", ios::app);
            voterRegistry << employee.sendToGovFName() << ','
                << employee.sendToGovLName() << ','
                << employee.sendToGovSSN() << ','
                << employee.sendToGovEmail() << ','
                << employee.sendToGovAddress() << ','
                << employee.sendToGovGender() << '\n';
        }
    }
