#ifndef Project_businessobject_WorksOn_h_
#define Project_businessobject_WorksOn_h_

using namespace std;

class WorksOn{
    int Id;
    long ESSN;
    int PNO;
    double Hours;
public:
    WorksOn();
    WorksOn(int id, long eSSN, int pno, double hours);    
    int GetId();
    void SetId(int id);
    long GetESSN();
    void SetESSN(long eSSN);
    int GetPNO();
    void SetPNO(int pNO);
    double GetHours();
    void SetHours(double hours);
    
};
#endif