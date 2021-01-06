#ifndef Project_businessobject_Dependent_h_
#define Project_businessobject_Dependent_h_

#include <iostream>
#include <string>
#include <vector>
#include "TableUnit.h"
using namespace std;

class Dependent : public TableUnit{
    long _eSSN;
    string _dependentName;
    string _sex;
    string _bDate;
    string _relationship;
public:
    Dependent();
    Dependent(long eSSN, string dependentName, string sex, string bDate, string relationship);
    
    /** @brief Function update attribute from the array _member
     *  
     *@details  Function update attribute from the array _member
    */
    void fromMapMember() override;

    /** @brief Function save attribute in array member
     * 
     *@details Function save attribute in array member
     *
    */
    void toMapMember() override;

    /** @brief Function initialize a new memory 
     * 
     *@details Function initialize a new memory 
     *
    */
    TableUnit *clonePtr();
    
    long GetESSN();
    void SetESSN(long eSSN);
    string GetDependentName();
    void SetDependentName(string dependentName);
    string GetSex();
    void SetSex(string sex);
    string GetBDate();
    void SetBDate(string bDate);
    string GetRelationship();
    void SetRelationship(string relationship);

};
#endif