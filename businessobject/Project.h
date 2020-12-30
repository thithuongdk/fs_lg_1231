#ifndef Project_businessobject_Project_h_
#define Project_businessobject_Project_h_

#include <iostream>
#include <string>
using namespace std;

class Project{
    string PName;       // Name of Project
    int PNumber;        // number of Project
    string PLocation;   // Project location
    int DNum;           // dept Location number
public:
    Project();
    Project(string pName, int pNumber, string pLocation, int dNum);
    string GetPName();
    void SetPName(string pName);
    int GetPNumber();
    void SetPNumber(int pNumber);
    string GetPLocation();
    void SetPLocation(string pLocation);
    int GetDNum();
    void SetDNum(int dNum);
};

#endif // Project_businessobject_Project_h_