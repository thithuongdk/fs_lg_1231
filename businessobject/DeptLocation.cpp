#include "DeptLocation.h"

// ========Contructor========
DeptLocation::DeptLocation(){
    _dNumber = 0;
    _dLocation = "";
}
DeptLocation::DeptLocation(const int dNumber, const string dLocation){
     _dNumber = dNumber;
    _dLocation = dLocation;
}

// ========Override========

void DeptLocation::fromMapMember(){
     _dNumber = stoi(_member["DNumber"]);
    _dLocation = _member["DLocation"];
}
void DeptLocation::toMapMember(){
    _member["DNumber"] = to_string( _dNumber);
    _member["DLocation"] = _dLocation;
}

TableUnit *DeptLocation::clonePtr(){
    TableUnit *pU = new DeptLocation();
    return pU;
}

int DeptLocation::GetDNumber(){
    return _dNumber;
};

void DeptLocation::SetDNumber(int dNumber){
    _dNumber = dNumber;
};

string DeptLocation::GetDLocation(){
    return _dLocation;
};

void DeptLocation::SetDLocation(string dLocation){
    _dLocation = dLocation;
};