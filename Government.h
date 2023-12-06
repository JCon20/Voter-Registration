#pragma once
#include <iostream>

using namespace std;

class Government {
private:
    string deptID = "10315";
    string deptName = "Voter Verification Services";
    string state = "Alabama";
    string county = "Mobile County";
    string city = "Mobile";

    bool approved;
    bool registered;

public:
    Government();
    ~Government();

    bool valid_city(string city);
    bool valid_state(string state);
    bool eligibilityCheck(int ssn, bool temp);
    void approveRegistration(bool eligible); // approves the request for verification
    bool checkVoterDatabase(int ssn);
    void updateVoterDatabase();

};
