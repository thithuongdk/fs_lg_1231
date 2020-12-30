#include "Employee.h"

Employee::Employee(){};

Employee::Employee(string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSNN = superSSN;
    DNO = dno;
};

Employee::Employee(json j){
    ImportJson(j);
};
Employee::Employee(vector<string> vt){
    ImportVt(vt);
};

// ========Override========
void Employee::DataIn(){
    EmployeeIO io;
    vector<string> vtIn = io.DIn();    
    ImportVt(vtIn);
};
void Employee::DataOut(){
    vector<string> vtOut = ExportVt();
    EmployeeIO io;
    io.DOut(vtOut);
};
json Employee::ExportJson(){
    json j;
    j["FName"] = FName;
    j["MInit"] = MInit;
    j["LName"] = LName;
    j["SSN"] = to_string(SSN);
    j["BDate"] = BDate;
    j["Address"] = Address;
    j["Sex"] = to_string(Sex);
    j["Salary"] = to_string(Salary);
    j["SuperSNN"] = to_string(SuperSNN);
    j["DNO"] = to_string(DNO);
    return j;
};
string Employee::ExportString(){
    string s("");
    s += "{";
    s += FName + ", ";
    s += MInit + ", ";
    s += LName + ", ";
    s += to_string(SSN) + ", ";
    s += BDate + ", ";
    s += Address + ", ";
    s += to_string(Sex) + ", ";
    s += to_string(Salary) + ", ";
    s += to_string(SuperSNN) + ", ";
    s += to_string(DNO);
    s += "}";
    return s;
};
vector<string> Employee::ExportVt(){
    vector<string> vtOut;
    vtOut.push_back(FName);
    vtOut.push_back(MInit);
    vtOut.push_back(LName);
    vtOut.push_back(to_string(SSN));
    vtOut.push_back(BDate);
    vtOut.push_back(Address);
    vtOut.push_back(to_string(Sex));
    vtOut.push_back(to_string(Salary));
    vtOut.push_back(to_string(SuperSNN));
    vtOut.push_back(to_string(DNO));
    return vtOut;
};
void Employee::ImportJson(json j){
    FName = j["FName"];
    MInit = j["MInit"];
    LName = j["LName"];
    SSN = stol(to_string(j["SSN"]));
    BDate = j["BDate"];
    Address = j["Address"];
    Sex = to_string(j["Sex"])[0];
    Salary = stoi(to_string(j["Salary"]));
    SuperSNN = stol(to_string(j["SuperSNN"]));
    DNO = stoi(to_string(j["DNO"]));
};
void Employee::ImportVt(vector<string> vt){
    FName = vt[0];
    MInit = vt[1];
    LName = vt[2];
    SSN = stol(vt[3]);
    BDate = vt[4];
    Address = vt[5];
    Sex = vt[6][0];
    Salary = stoi(vt[7]);
    SuperSNN = stol(vt[8]);
    DNO = stoi(vt[9]);
};
TableUnit *Employee::ClonePtr(){
    TableUnit *pU = new Employee();
    return pU;
};

// ========Get Set========
string Employee::GetFName(){
    return FName;
};

void Employee::SetFName(string fName){
    FName = fName;
};

string Employee::GetMInit(){
    return MInit;
};

void Employee::SetMInit(string mInit){
    MInit = mInit;
};

string Employee::GetLName(){
    return LName;
};

void Employee::SetLName(string lName){
    LName = lName;
};

long Employee::GetSSN(){
    return SSN;
};

void Employee::SetSSN(long ssn){
    SSN = ssn;
};

string Employee::GetBDate(){
    return BDate;
};

void Employee::SetBDate(string bDate){
    BDate = bDate;
};

string Employee::GetAddress(){
    return Address;
};

void Employee::SetAddress(string address){
    Address = address;
};

char Employee::GetSex(){
    return Sex;
};

void Employee::SetSex(char sex){
    Sex = sex;
};

int Employee::GetSalary(){
    return Salary;
};

void Employee::SetSalary(int salary){
    Salary = salary;
};

long Employee::GetSuperSNN(){
    return SuperSNN;
};

void Employee::SetSuperSNN(long superSNN){
    SuperSNN = superSNN;
};

int Employee::GetDNO(){
    return DNO;
};

void Employee::SetDNO(int dno){
    DNO = dno;
};
