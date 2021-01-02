#include "Company.h"

// ========Contructor========
Company::Company(){
    // employee = new Employee();
    // department = new Department();
    // dependent = new Dependent();
    // deptLocation = new DeptLocation();
    // project = new Project();
    // worksOn = new WorksOn();

    EmployeeData = new TableData(new Employee());
    DepartmentData = new TableData(new Department());
    DependentData = new TableData(new Dependent());
    DeptLocationData = new TableData(new DeptLocation());
    ProjectData = new TableData(new Project());
    WorksOnData = new TableData(new WorksOn());
};

// Company::~Company(){
//     delete EmployeeData;
//     delete DepartmentData;
//     delete DependentData;
//     delete DeptLocationData;
//     delete ProjectData;
//     delete WorksOnData;
// };

void EnterEmployee(TableData *);
void EnterDepartment(TableData *);
void EnterDependent(TableData *);
void EnterDeptLocation(TableData *);
void EnterProject(TableData *);
void EnterWorksOn(TableData *);

void EnterEmployee(TableData *data){
    Employee* tU1 = new Employee("John", "B", "Smith", 123456789, "1965-01-09", "731 Fondren, Houston, TX", "M", 30000, 333445555, 5);
    Employee* tU2 = new Employee("Franklin", "T", "Wong", 333445555, "1955-12-08", "638 Voss, Houston, TX", "M", 40000, 888665555, 5);
    Employee* tU3 = new Employee("Alicia", "J", "Zelaya", 999887777, "1968-07-19", "3321 Castle, Spring, TX", "F", 25000, 987654321, 4);
    Employee* tU4 = new Employee("Jennifer", "S", "Wallace", 987654321, "1941-06-20", "291 Berry, Bellaire, TX", "F", 43000, 888665555, 4);
    Employee* tU5 = new Employee("Ramesh", "K", "Narayan", 666884444, "1962-09-15", "975 Fire Oak, Humble, TX", "M", 38000, 333445555, 5);
    Employee* tU6 = new Employee("Joyce", "A", "English", 453453453, "1972-07-31", "5631 Ric, Houston, TX", "F", 25000, 333445555, 5);
    Employee* tU7 = new Employee("Ahmad", "V", "Jabbar", 987987987, "1969-03-29", "980 Dallas, Houston, TX", "M", 25000, 987654321, 4);
    Employee* tU8 = new Employee("James", "E", "Borg", 888665555, "1937-11-10", "450 Stone, Houston, TX", "M", 55000, -1, 1);
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
    data->Push(tU4);
    data->Push(tU5);
    data->Push(tU6);
    data->Push(tU7);
    data->Push(tU8);
}

void EnterDepartment(TableData *data){
    Department* tU1 = new Department("Research", 5, 333445555, "1988-05-22");
    Department* tU2 = new Department("Admrstration", 4, 987654321, "1995-01-01");
    Department* tU3 = new Department("Headquarters", 1, 888665555, "1981-06-19");
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
}

void EnterDependent(TableData *data){
    Dependent* tU1 = new Dependent(333445555, "Alice", "F", "1986-04-05", "DAUGHTER");
    Dependent* tU2 = new Dependent(333445555, "Theodore", "M", "1983-10-25", "SON");
    Dependent* tU3 = new Dependent(333445555, "Joy", "F", "1958-05-03", "SPOUSE");
    Dependent* tU4 = new Dependent(987654321, "Abner", "M", "1942-02-28", "SPOUSE");
    Dependent* tU5 = new Dependent(123456789, "Michael", "M", "1988-01-04", "SON");
    Dependent* tU6 = new Dependent(123456789, "Alice", "F", "1988-12-30", "DAUGHTER");
    Dependent* tU7 = new Dependent(123456789, "Elizabeth", "F", "1967-05-05", "SPOUSE");
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
    data->Push(tU4);
    data->Push(tU5);
    data->Push(tU6);
    data->Push(tU7);
}

void EnterProject(TableData *data){
    Project* tU1 = new Project("ProductX", 1, "Bellaire", 5);
    Project* tU2 = new Project("ProductY", 2, "Sugarland", 5);
    Project* tU3 = new Project("ProductZ", 3, "Houston", 5);
    Project* tU4 = new Project("Computerization", 10, "Stafford", 4);
    Project* tU5 = new Project("Reorganization", 20, "Houston", 1);
    Project* tU6 = new Project("Newbenefits", 30, "Stafford", 4);
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
    data->Push(tU4);
    data->Push(tU5);
    data->Push(tU6);
}

void EnterDeptLocation(TableData *data){
    DeptLocation* tU1 = new DeptLocation(1, "Houston");
    DeptLocation* tU2 = new DeptLocation(4, "Stafford");
    DeptLocation* tU3 = new DeptLocation(5, "Bellaire");
    DeptLocation* tU4 = new DeptLocation(5, "Sugarland");
    DeptLocation* tU5 = new DeptLocation(5, "Houston");
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
    data->Push(tU4);
    data->Push(tU5);
}

void EnterWorksOn(TableData *data){
    WorksOn* tU1 = new WorksOn(123456789, 1, 32.5);
    WorksOn* tU2 = new WorksOn(123456789, 2, 7.5);
    WorksOn* tU3 = new WorksOn(666884444, 3, 40.0);
    WorksOn* tU4 = new WorksOn(453453453, 1, 20.0);
    WorksOn* tU5 = new WorksOn(453453453, 2, 20.0);
    WorksOn* tU6 = new WorksOn(333445555, 2, 10.0);
    WorksOn* tU7 = new WorksOn(333445555, 3, 10.0);
    WorksOn* tU8 = new WorksOn(333445555, 10, 10.0);
    WorksOn* tU9 = new WorksOn(333445555, 20, 10.0);
    WorksOn* tU10 = new WorksOn(999887777, 30, 30.0);
    WorksOn* tU11 = new WorksOn(999887777, 10, 10.0);
    WorksOn* tU12 = new WorksOn(987987987, 10, 35.0);
    WorksOn* tU13 = new WorksOn(987987987, 30, 5.0);
    WorksOn* tU14 = new WorksOn(987654321, 30, 20.0);
    WorksOn* tU15 = new WorksOn(987654321, 20, 15.0);
    WorksOn* tU16 = new WorksOn(888665555, 20, 0);
    data->Push(tU1);
    data->Push(tU2);
    data->Push(tU3);
    data->Push(tU4);
    data->Push(tU5);
    data->Push(tU6);
    data->Push(tU7);
    data->Push(tU8);
    data->Push(tU9);
    data->Push(tU10);
    data->Push(tU11);
    data->Push(tU12);
    data->Push(tU13);
    data->Push(tU14);
    data->Push(tU15);
    data->Push(tU16);
}

void Company::InitData(){
    EnterEmployee(EmployeeData);
    EnterDepartment(DepartmentData);
    EnterDependent(DependentData);
    EnterDeptLocation(DeptLocationData);
    EnterProject(ProjectData);
    EnterWorksOn(WorksOnData);
}

void Company::ShowAllData(){
    IO myIO;
    myIO.DataOut(EmployeeData);
    myIO.DataOut(DepartmentData);
    myIO.DataOut(DependentData);
    myIO.DataOut(DeptLocationData);
    myIO.DataOut(ProjectData);
    myIO.DataOut(WorksOnData);
}
//********************************************************//

// void Q1_CRUD(TableData* ptD, TableUnit* ptU){
void Company::Q1_CRUD(int iAction, int iData, int index){
    const vector<TableData *> cData = {
                        EmployeeData,
                        DepartmentData,
                        DependentData,
                        DeptLocationData,
                        ProjectData,
                        WorksOnData};
    TableData *data = cData[iData - 1];
    IO myIO;
    TableUnit *unit = data->GetPtr(index);
    switch (iAction){
        case 1: // add
            myIO.DataIn(data);
            break;
        case 2: // read
            myIO.DataOut(data->GetPtr(index));
            break;
        case 3: // read all
            myIO.DataOut(data);
            break;
        case 4: // update
            myIO.DataOut(unit);
            myIO.DataIn(unit);
            break;
        case 5: // delete
            myIO.DataOut(unit);       
            data->Delele(index);
            break;
    };
}
vector<vector<string>> Company::Q2_ShowEmployeeOfManager(string mngNameInput){
    vector<vector<string>> eOut;
    vector<TableUnit*> employees = EmployeeData->GetData();
    for(TableUnit *tU1 : employees){
        if(tU1->GetValue("FName") +  " " + tU1->GetValue("LName") == mngNameInput ){
            string mngSSN = tU1->GetValue("SSN");
            for(TableUnit *tU2 : employees){
                if(tU2->GetValue("SuperSSN") == mngSSN ){
                    string eName = tU2->GetValue("FName") + " " + tU2->GetValue("LName");
                    string eSSN = tU2->GetValue("SSN");
                    vector<string> e = {eName, eSSN};
                    eOut.push_back(e);
                }
            }
        }
    }
    return eOut;
}
vector<vector<string>> Company::Q3_ShowEmployeeHasDependent(){
    vector<TableUnit*> dependents = DependentData->GetData();
    vector<vector<string>> eOut;
    for(TableUnit *tU1 : dependents){
        string relationship = tU1->GetValue("Relationship");
        if(relationship == "DAUGHTER" || relationship == "SON" ){
            string rName = tU1->GetValue("DependentName");
            string eSSN = tU1->GetValue("ESSN");
            TableUnit* employee = EmployeeData->Find("SSN", eSSN);
            if(employee != nullptr ){
                string eName = employee->GetValue("FName") + " " + employee->GetValue("LName");
                string eSSN = employee->GetValue("SSN");
                vector<string> e = {eName, eSSN, rName, relationship};
                eOut.push_back(e);
            }
        }
    }
    return eOut;
}
vector<vector<string>> Company::Q4_ShowProjecTime(){
    vector<TableUnit*> projects = ProjectData->GetData();
    vector<TableUnit*> worksOns = WorksOnData->GetData();
    vector<vector<string>> eOut;
    for(TableUnit *tU1 : projects){
        string pNo = tU1->GetValue("PNumber");
        string pName = tU1->GetValue("PName");
        double workTime = 0;
        for(TableUnit *tU2 : worksOns){
            if(tU2->GetValue("PNO") == pNo ){
                workTime += stod(tU2->GetValue("Hours"));
            }
        }
        vector<string> e = {pName, pNo, to_string(workTime)};
        eOut.push_back(e);
    }
    return eOut;
}

vector<vector<string>> Company::Q5_ShowFreeEmployee(){
    vector<TableUnit*> employees = EmployeeData->GetData();
    vector<TableUnit*> worksOns = WorksOnData->GetData();
    vector<vector<string>> eOut;
    for(TableUnit *tU1 : employees){
        string eNo = tU1->GetValue("SSN");
        string eName = tU1->GetValue("FName") + " " + tU1->GetValue("MInit") + " " + tU1->GetValue("LName");
        bool work = false;
        for(TableUnit *tU2 : worksOns){
            if(tU2->GetValue("ESSN") == eNo && stod(tU2->GetValue("Hours")) > 0){
                work = true;
                break;
            }
        }
        if(!work){
            vector<string> e = {eName, eNo};
            eOut.push_back(e);
        }
    }
    return eOut;
}

long Company::Q6_ShowDepartmentAvgSalary(string dNameInput){
    vector<TableUnit*> employees = EmployeeData->GetData();
    vector<TableUnit*> departments = DepartmentData->GetData();
    long lOut = 0;
    for(TableUnit *tU1 : departments){
        string dNo = tU1->GetValue("DNumber");
        if(tU1->GetValue("DName") == dNameInput){
            long sumSalary = 0;
            int iEmployee = 0;
            for(TableUnit *tU2 : employees){
                sumSalary += stoi(tU2->GetValue("Salary"));
                iEmployee++;
            }
            lOut = long(sumSalary / iEmployee);
            break;
        }        
    }
    return lOut;
}

long Company::Q7_ShowSexAvgSalary(string sexInput){
    vector<TableUnit*> employees = EmployeeData->GetData();
    long sumSalary = 0;
    int iEmployee = 0;
    for(TableUnit *tU1 : employees){
        if(tU1->GetValue("Sex") == sexInput){
            sumSalary += stoi(tU1->GetValue("Salary"));
            iEmployee++;
        }        
    }
    return long(sumSalary / iEmployee);
}

vector<vector<string>> Company::Q8_ManagerNoDependent(){
    vector<TableUnit*> departments = DepartmentData->GetData();
    vector<vector<string>> eOut;
    for(TableUnit *tU1 : departments){
        string mgrSSN = tU1->GetValue("MgrSSN");
        if(DependentData->Find("ESSN", mgrSSN) == nullptr){
            TableUnit *eMgr = EmployeeData->Find("SSN", mgrSSN);
            string mName = eMgr->GetValue("LName");
            vector<string> e = {mName, mgrSSN};
            eOut.push_back(e);
            break;
        }        
    }
    return eOut;
}

vector<vector<string>> Company::Q9_minTimeWorkOnAtDependent(int dNumberInput, string pNameInput, double minTimeWorksOn){
    vector<TableUnit*> employees = EmployeeData->GetData();
    vector<TableUnit*> worksOns = WorksOnData->GetData();
    vector<vector<string>> eOut;
    TableUnit *project = ProjectData->Find("PName", pNameInput);
    if(project != nullptr){
        string pNo = project->GetValue("PNumber");
        for(TableUnit *tU1 : employees){
            if(tU1->GetValue("DNO") == to_string(dNumberInput)){
                string eSSN = tU1->GetValue("SSN");
                string fullName = tU1->GetValue("FName") + " " + tU1->GetValue("LName");
                double sumTime = 0;
                for(TableUnit *tU2 : worksOns){
                    if(tU2->GetValue("PNO") == pNo && tU2->GetValue("ESSN") == eSSN){
                        sumTime += stod(tU2->GetValue("Hours"));
                    }
                }
                if(sumTime >= minTimeWorksOn ){
                    vector<string> e = {fullName, eSSN, to_string(sumTime)};
                    eOut.push_back(e);
                }
            }
        }
    }
    return eOut;
}

void Company::Q10_Backup(){
    // auto t = time(nullptr);
    // auto tm = *localtime(&t);
    // string sVer = "hihi";
    // char *c = &sVer[0];
    // string pathVer(sVer);
    // mkdir(*c);
    
    string pathVer = "2021_01_02_23h_23_00";
    EmployeeData->Backup(PATH_BACKUP +pathVer + "\\Employee.data");
    DepartmentData->Backup(PATH_BACKUP + pathVer + "\\Department.data");
    DependentData->Backup(PATH_BACKUP + pathVer + "\\Dependent.data");
    DeptLocationData->Backup(PATH_BACKUP + pathVer + "\\DeptLocation.data");
    ProjectData->Backup(PATH_BACKUP + pathVer + "\\Project.data");
    WorksOnData->Backup(PATH_BACKUP + pathVer + "\\WorksOn.data");   
}
void Company::Q10_Restore(string pathVer){
    EmployeeData->Restore(PATH_BACKUP + pathVer + "\\Employee.data");
    DepartmentData->Restore(PATH_BACKUP + pathVer + "\\Department.data");
    DependentData->Restore(PATH_BACKUP + pathVer + "\\Dependent.data");
    DeptLocationData->Restore(PATH_BACKUP + pathVer + "\\DeptLocation.data");
    ProjectData->Restore(PATH_BACKUP + pathVer + "\\Project.data");
    WorksOnData->Restore(PATH_BACKUP + pathVer + "\\WorksOn.data");   
}
vector<string> Q10_GetListVerRestore(){
    vector<string> vts;
    return vts;
};