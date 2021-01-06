#include "WorksOn.h"
#include <string>

WorksOn::WorksOn(){}

WorksOn::WorksOn(long eSSN, int pno, double hours)
{
    _eSSN = eSSN;
    _pno= pno;
    _hours= hours;
}

// ========Override========

void WorksOn::fromMapMember(){
    _eSSN = stol(_member["ESSN"]);
    _pno = stoi(_member["PNO"]);
    _hours = stod(_member["Hours"]);
}
void WorksOn::toMapMember(){
    _member["ESSN"] = to_string(_eSSN);
    _member["PNO"] = to_string(_pno);
    _member["Hours"] = to_string(_hours);
}

TableUnit *WorksOn::clonePtr(){
    TableUnit *pU = new WorksOn();
    return pU;
}

long WorksOn::GetESSN(){
    return _eSSN;
};

void WorksOn::SetESSN(long eSSN){
    _eSSN = eSSN;
};

int WorksOn::GetPNO(){
    return _pno;
};

void WorksOn::SetPNO(int pNO){
    _pno = pNO;
};

double WorksOn::GetHours(){
    return _hours;
};

void WorksOn::SetHours(double hours){
    _hours = hours;
};
