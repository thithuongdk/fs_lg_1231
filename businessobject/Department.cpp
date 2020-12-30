#include "Department.h"

Department::Department(){};
// input parameters
Department::Department(string dName, int dNumber, long mgrSSN, string mgrStartDate)
{
    DName = dName;                  // Name of department
    DNumber = dNumber;              // Number of department
    MgrSSN = mgrSSN;                // Social security of manafer
    MgrStartDate = mgrStartDate;    // Start date of manager 
};

string Department::GetDName(){
    return DName;
};
void Department::SetDName(string dName){
    DName = dName; 
};
int Department::GetDNumber(){
    return DNumber;
};
void Department::SetDNumber(int dNumber){
    DNumber = dNumber; 
};
long Department::GetMgrSSN(){
    return MgrSSN;
};
void Department::SetMgrSSN(long mgrSSN){
    MgrSSN = mgrSSN; 
};
string Department::GetMgrStartDate(){
    return MgrStartDate;
};
void Department::SetMgrStartDate(string mgrStartDate){
    MgrStartDate = mgrStartDate; 
};