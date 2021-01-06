#ifndef Project_businessobject_WorksOn_h_
#define Project_businessobject_WorksOn_h_

#include <iostream>
#include <string>
#include <vector>
#include "TableUnit.h"
using namespace std;

class WorksOn : public TableUnit{
    long _eSSN;
    int _pno;
    double _hours;
public:
    WorksOn();
    WorksOn(long eSSN, int pno, double hours);
    
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
    int GetPNO();
    void SetPNO(int pNO);
    double GetHours();
    void SetHours(double hours);
    
};
#endif