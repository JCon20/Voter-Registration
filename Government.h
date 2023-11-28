#pragma once
#include <iostream>

using namespace std;

class Government {
private:
        string deptID = "No Department ID";
        string deptName = "No Department Name";
        string state = "No State";

public:
        Government();
        ~Government();

        string getDeptID();
        string getDeptName();
        string getGovState();
        string approveRequest();
        string denyRequest();
};
