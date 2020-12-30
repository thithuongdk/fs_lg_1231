#include "Dependent.h"
#include <string>

Dependent::Dependent(){};

Dependent::Dependent(int id, long eSSN, string dependentName, char sex, string bDate, string relationship)
{
    Id = id;
    ESSN = eSSN;
    DependentName = dependentName;
    Sex = sex;
    BDate = bDate;
    Relationship = relationship;
};

int Dependent::GetId(){
    return Id;
};

void Dependent::SetId(int id){
    Id = id;
};

long Dependent::GetESSN(){
    return ESSN;
};

void Dependent::SetESSN(long eSSN){
    ESSN = eSSN;
};

string Dependent::GetDependentName(){
    return DependentName;
};

void Dependent::SetDependentName(string dependentName){
    DependentName = dependentName;
};

char Dependent::GetSex(){
    return Sex;
};

void Dependent::SetSex(char sex){
    Sex = sex;
};

string Dependent::GetBDate(){
    return BDate;
};

void Dependent::SetBDate(string bDate){
    BDate = bDate;
};

string Dependent::GetRelationship(){
    return Relationship;
};

void Dependent::SetRelationship(string relationship){
    Relationship = relationship;
};

