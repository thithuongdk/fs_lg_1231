#include "WorksOn.h"
#include <string>

WorksOn::WorksOn(){};

WorksOn::WorksOn(int id, long eSSN, int pno, double hours)
{
    Id = id;
    ESSN = eSSN;
    PNO = pno;
    Hours = hours;
};

int WorksOn::GetId(){
    return Id;
};

void WorksOn::SetId(int id){
    Id = id;
};

long WorksOn::GetESSN(){
    return ESSN;
};

void WorksOn::SetESSN(long eSSN){
    ESSN = eSSN;
};

int WorksOn::GetPNO(){
    return PNO;
};

void WorksOn::SetPNO(int pNO){
    PNO = pNO;
};

double WorksOn::GetHours(){
    return Hours;
};

void WorksOn::SetHours(double hours){
    Hours = hours;
};
