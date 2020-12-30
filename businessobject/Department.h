#ifndef Project_businessobject_Department_h_
#define Project_businessobject_Department_h_

#include <string>
#include "TableUnit.h"
using namespace std;

class Department : public TableUnit{
private:
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;
public :
    Department();
    Department(json j);
    Department(string dName, int dNumber, long mgrSSN, string mgrStartDate);
    
    string ToString() override;
    json ToJson() override;
    void FromJson(json) override;
    TableUnit* NewPoint() override;

    string GetDName();
    void SetDName(string dName);
    int GetDNumber();
    void SetDNumber(int dNumber);
    long GetMgrSSN();
    void SetMgrSSN(long mgrSSN);
    string GetMgrStartDate();
    void SetMgrStartDate(string mgrStartDate);
};
#endif