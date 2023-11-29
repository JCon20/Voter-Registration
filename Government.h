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

public:
        Government();
        ~Government();

        bool valid_city();
        bool valid_state();
        bool valid_zipcode();
        bool eligibilityCheck();
        void approveRegistration(); // approves the request for verification
        void checkVoterDatabase();
        void updateVoterDatabase();
        
};
