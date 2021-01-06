//#include <string>
#include "Project.h"

Project::Project(){}

Project::Project(string pName, int pNumber, string PLocation, int dNum){
    this->_pName = pName;
    this->_pNumber= pNumber;
    this->_pLocation = PLocation;//undefined if don't have this pointer
    this->_dNum = dNum;
}

// ========Override========

void Project::fromMapMember(){
    _pName = _member["PName"];
    _pNumber = stoi(_member["PNumber"]);
    _pLocation = _member["PLocation"];
    _dNum= stoi(_member["DNum"]);
}
void Project::toMapMember(){
    _member["PName"] = _pName;
    _member["PNumber"] = to_string(_pNumber);
    _member["PLocation"] = _pLocation;
    _member["DNum"] = to_string(_dNum);
}

TableUnit *Project::clonePtr(){
    TableUnit *pU = new Project();
    return pU;
}

string Project::GetPName(){
    return _pName;
};

void Project::SetPName(string pName){
    _pName = pName;
};

int Project::GetPNumber(){
    return _pNumber;
};

void Project::SetPNumber(int pNumber){
    _pNumber = pNumber;
};

string Project::GetPLocation(){
    return _pLocation;
};

void Project::SetPLocation(string pLocation){
    _pLocation = pLocation;
};

int Project::GetDNum(){
    return _dNum;
};

void Project::SetDNum(int dNum){
    _dNum = dNum;
};
