#include <iostream>
// #include "businessobject\Employee.h"
// #include "businessobject\Department.h"
#include "businessobject\DeptLocation.h"
// #include "dataprocessing\DeptLocationData.h"
#include "dataprocessing\TableData.h"
// #include "businessobject\Project.h"
// #include "businessobject\WorksOn.h"
// #include "businessobject\Dependent.h"
//haha
//hihi
using namespace std;

// int mainOld(){
//     int i;
//     cout << "-- QLNS Group Linh Thuong Tin --" << endl;
//     DeptLocation dl1(1, "hihi11");
//     DeptLocation dl2(2, "hata11");
//     DeptLocationData *listDL = new DeptLocationData();
//     i = listDL->Push(&dl1);
//     i = listDL->Push(&dl2);
//     i = listDL->DataIn();    
//     listDL->DataOut();
//     cout << "----------------end---------------------"<< endl;
//     return 0;
// }

int main(){
    int i;
    cout << "-- QLNS Group Linh Thuong Tin --" << endl;
    DeptLocation dl1(1, "hihi11");
    DeptLocation dl2(2, "hata11");
    TableData *listDL = new TableData();
    i = listDL->Push(&dl1);
    i = listDL->Push(&dl2);
    i = listDL->DataIn(&dl1);    
    //listDL->GetPtr(1)->DataOut();
    listDL->DataOut();
    cout << "----------------end---------------------"<< endl;
    return 0;
}