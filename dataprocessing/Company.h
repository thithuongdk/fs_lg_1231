#ifndef Project_dataprocessing_Company_h_
#define Project_dataprocessing_Company_h_

#include "..\businessobject\TableUnit.h"
#include "..\businessobject\Employee.h"
#include "..\businessobject\Department.h"
#include "..\businessobject\Dependent.h"
#include "..\businessobject\DeptLocation.h"
#include "..\businessobject\Project.h"
#include "..\businessobject\WorksOn.h"
#include "..\dataprocessing\TableData.h"
#include "..\ui\IO.h"//
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <direct.h>
#include <ctime>
using namespace std;

class Company{
    TableData *EmployeeData;
    TableData *DepartmentData;
    TableData *DependentData;
    TableData *DeptLocationData;
    TableData *ProjectData;
    TableData *WorksOnData;

    const string PATH_BACKUP = "dataprocessing\\backup\\";
public:
    Company();
    // ~Company();
    void InitData();
    void ShowAllData();
    void Q1_CRUD(int iAction, int iData, int index);
    //void Q1_CRUD(TableData*, TableUnit*);
    vector<vector<string>> Q2_ShowEmployeeOfManager(string mngNameInput);
    vector<vector<string>> Q3_ShowEmployeeHasDependent();
    vector<vector<string>> Q4_ShowProjecTime();
    vector<vector<string>> Q5_ShowFreeEmployee();
    long Q6_ShowDepartmentAvgSalary(string dNameInput);
    long Q7_ShowSexAvgSalary(string sexInput);
    vector<vector<string>> Q8_ManagerNoDependent();
    vector<vector<string>> Q9_minTimeWorkOnAtDependent(int dNumberInput, string pNameInput, double minTimeWorksOn);
    // void Q10_BackupAndRestore(string folderPath);
    vector<string> Q10_GetListVerRestore();
    void Q10_Backup();
    void Q10_Restore(string pathVer);
};

#endif // Project_dataprocessing_Company_h_