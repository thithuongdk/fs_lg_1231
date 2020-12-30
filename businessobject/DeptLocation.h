#ifndef Project_businessobject_DeptLocation_h_
#define Project_businessobject_DeptLocation_h_

#include <iostream>
#include <string>
#include <vector>
#include "../libs/json.hpp"
#include "../ui/DeptLocationIO.h"
#include "TableUnit.h"
using namespace std;
using json = nlohmann::json;

class DeptLocation : public TableUnit{
    int DNumber;        // number of location
    string DLocation;   // location name
public:
    DeptLocation();
    DeptLocation(int dNumber, string dLocation);
    DeptLocation(json j);
    DeptLocation(vector<string> vt);

    void DataIn() override;
    void DataOut() override;
    json ExportJson() override;
    string ExportString() override;
    vector<string> ExportVt() override;
    void ImportJson(json j) override;
    void ImportVt(vector<string> vt) override;
    TableUnit *ClonePtr() override;

    int GetDNumber();
    void SetDNumber(int dNumber);
    string GetDLocation();
    void SetDLocation(string dLocation);
};

#endif // Project_businessobject_DeptLocation_h_