#include "DeptLocation.h"

// ========Contructor========
DeptLocation::DeptLocation(){
    DNumber = 0;
    DLocation = "";
};
DeptLocation::DeptLocation(const int dNumber, const string dLocation){
    DNumber = dNumber;
    DLocation = dLocation;
};
DeptLocation::DeptLocation(json j){
    ImportJson(j);
};
DeptLocation::DeptLocation(vector<string> vt){
    ImportVt(vt);
};

// ========Override========
void DeptLocation::DataIn(){
    DeptLocationIO io;
    vector<string> vtIn = io.DIn();    
    ImportVt(vtIn);
};
void DeptLocation::DataOut(){
    vector<string> vtOut = ExportVt();
    DeptLocationIO io;
    io.DOut(vtOut);
};
json DeptLocation::ExportJson(){
    json j;
    j["DNumber"] = to_string(DNumber);
    j["DLocation"] = DLocation;
    return j;
};
string DeptLocation::ExportString(){
    string s("");
    s += "{";
    s += to_string(DNumber) + ", ";
    s += DLocation;
    s += "}";
    return s;
};
vector<string> DeptLocation::ExportVt(){
    vector<string> vtOut;
    vtOut.push_back(to_string(DNumber));
    vtOut.push_back(DLocation);
    return vtOut;
};
void DeptLocation::ImportJson(json j){
    DNumber = stoi(to_string(j["DNumber"]));
    DLocation = j["DLocation"];
};
void DeptLocation::ImportVt(vector<string> vt){
    DNumber = stoi(vt[0]);
    DLocation = vt[1];
};
TableUnit *DeptLocation::ClonePtr(){
    TableUnit *pU = new DeptLocation();
    return pU;
};

// ========Get Set========
int DeptLocation::GetDNumber(){
    return DNumber;
};
void DeptLocation::SetDNumber(int dNumber){
    DNumber = dNumber;
};
string DeptLocation::GetDLocation(){
    return DLocation;
};
void DeptLocation::SetDLocation(string dLocation){
    DLocation = dLocation;
};