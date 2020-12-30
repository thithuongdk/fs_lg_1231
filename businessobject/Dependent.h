#ifndef Project_businessobject_Dependent_h_
#define Project_businessobject_Dependent_h_

#include <string>
using namespace std;

class Dependent{
    int Id;
    long ESSN;
    string DependentName;
    char Sex;
    string BDate;
    string Relationship;
public:
    Dependent();
    Dependent(int id, long eSSN, string dependentName, char sex, string bDate, string relationship);
    int GetId();
    void SetId(int id);
    long GetESSN();
    void SetESSN(long eSSN);
    string GetDependentName();
    void SetDependentName(string dependentName);
    char GetSex();
    void SetSex(char sex);
    string GetBDate();
    void SetBDate(string bDate);
    string GetRelationship();
    void SetRelationship(string relationship);
};
#endif