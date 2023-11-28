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

        /*string getDeptID();
        string getDeptName();
        string getGovState(); may or may not end up being used */
        string approveRequest(); // approves the request for verification
        string denyRequest(); // denies the request for verification
};
